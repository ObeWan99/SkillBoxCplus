from aiogram import Bot, Dispatcher, executor, types
from aiogram.types import InlineKeyboardButton, InlineKeyboardMarkup, ReplyKeyboardMarkup, KeyboardButton
from config import TOKEN

bot = Bot(token=TOKEN)
dp = Dispatcher(bot=bot)

async def on_startup(_):
    print('Я был запущен!')

kb = ReplyKeyboardMarkup(resize_keyboard=True)
kb1 = KeyboardButton(text='/help')
kb2 = KeyboardButton(text='/vote')
kb.add(kb1).add(kb2)

ikb = InlineKeyboardMarkup(row_width=2)
ikb1 = InlineKeyboardButton(text='VK',
                            url='')
ikb2 = InlineKeyboardButton(text='Porno',
                            url='')
ikb.add(ikb1).add(ikb2)

@dp.message_handler(commands=['start'])
async def start_com(msg: types.Message):
    await msg.answer(text='Добро пожаловать! Дмитрий!',
                     reply_markup=kb)
    
@dp.message_handler(commands=['vote'])
async def vote_com(msg: types.Message):
    ikb = InlineKeyboardMarkup(row_width=2)
    ib1 = InlineKeyboardButton(text='❤️',
                            callback_data="like")
    ib2 = InlineKeyboardButton(text='🤮',
                            callback_data="dislike")
    ikb.add(ib1, ib2)
    await bot.send_photo(chat_id=msg.from_user.id,
                            photo="https://otkrit-ka.ru/uploads/posts/2021-11/pauki-krasivye-kartinki-42.jpg",
                            caption="Нравится ли тебе эта фотграфия?",
                            reply_markup=ikb)
    @dp.callback_query_handler()
    async def vote_callback(callback: types.CallbackQuery):
        if callback.data == "like":
            await callback.answer(text="УРА, Диме нравится!")
        return await callback.answer(text="НУ КАК ЖЕ НЕЕЕТ, ОНИ ТАКИЕ МИЛЫЕ")

        

if __name__ == "__main__":
    executor.start_polling(dispatcher=dp,
                           skip_updates=True,
                           on_startup=on_startup)
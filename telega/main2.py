import logging
from aiogram import Bot, Dispatcher , types, executor
from aiogram.types import ReplyKeyboardMarkup, KeyboardButton, ReplyKeyboardRemove
from config import TOKEN

bot = Bot(token=TOKEN)
dp = Dispatcher(bot)

kb = ReplyKeyboardMarkup(resize_keyboard=True)
kb.add(KeyboardButton('/start')).insert(KeyboardButton('/give'))

logging.basicConfig(level=logging.INFO)




@dp.message_handler(commands=['help'])
async def com_help(msg: types.Message):
    await bot.send_message(chat_id=msg.from_user.id,
                           text=COMMAND_HELP,
                           parse_mode="HTML",
                           reply_markup=kb)

@dp.message_handler(commands=['start'])
async def com_start(msg: types.Message):
    await bot.send_message(chat_id=msg.from_user.id,
                           text="Добро пожаловать!\nЗдесь ты можешь оформить подписку на мой сервер VPN.\nГарантирую высокую скорость и стабильно работы!",
                           parse_mode="HTML",)
    
@dp.message_handler(commands=['give'])
async def com_give(msg: types.Message):
    await bot.send_message(chat_id=msg.from_user.id,
                           text="<em>Когда юзаешь норм VPN</em>",
                           parse_mode="HTML")
    await bot.send_sticker(msg.from_user.id, sticker="CAACAgIAAxkBAAEJCBxkZyzcBvARl6nxRiPaPJ0EqMqE9QACRBQAAjOHQEvwpfRdkvwMKS8E")

@dp.message_handler(content_types=['text'])
async def get_text_messages(msg: types.Message): # msg объект класса Message
   if msg.text.lower() == "привет":
       await msg.answer(text="<em>Привет! Я тебя люблю!</em>", parse_mode="HTML")
   else:
       await msg.answer("<em>Прости, я умею только приветствовать и любить тебя</em>" + "❤️", parse_mode="HTML")
    
    
if __name__ == "__main__":
    executor.start_polling(dp, skip_updates=True)
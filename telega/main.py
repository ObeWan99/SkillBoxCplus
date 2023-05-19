from aiogram import Bot, executor, Dispatcher, types

from config import TOKEN
from inlineKB import kb, ikb

bot = Bot(TOKEN)
dp = Dispatcher(bot)


async def on_startup(_):
    print('Я был запущен!')

@dp.message_handler(commands=['start'])
async def start_command(message: types.Message):
    await message.answer(text='Добро пожаловать!\nЗдесь ты можешь оформить подписку на мой сервер VPN.\nГарантирую высокую скорость и стабильно работы!',
                         reply_markup=kb)

@dp.message_handler(commands=['links'])
async def links_command(message: types.Message):
    await message.answer(text='Напиши мне!\nИ я дам тебе подробную инструкцию по установке VPN.',
                         reply_markup=ikb)


if __name__ == "__main__":
    executor.start_polling(dispatcher=dp,
                           skip_updates=True,
                           on_startup=on_startup)
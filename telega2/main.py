# from aiogram import Bot, Dispatcher, executor, types
# from aiogram.types import InlineKeyboardButton, InlineKeyboardMarkup, ReplyKeyboardMarkup, KeyboardButton
# from aiogram.utils.callback_data import CallbackData
# from config import TOKEN
# from db import db_connect, create_user, edit_user

# bot = Bot(token=TOKEN)
# dp = Dispatcher(bot=bot)

# async def on_startup(_):
#     await db_connect()
#     print("Я был запущен!")

# info_cb = CallbackData("user", "id", "action")
# ikb = InlineKeyboardMarkup(row_width=2)
# ib1 = InlineKeyboardButton("Заполнить данные", callback_data=info_cb.new(action="get_all_users"))
# ib2 = InlineKeyboardButton("Отмена", callback_data=info_cb.new(action="add_new_user"))
# ikb.add(ib1).add(ib2)


# @dp.message_handler(commands=["start"])
# async def start_com(msg: types.Message):
#     await msg.answer(text="Добро пожаловать!\nЗдесь ты можешь оформить подписку на мой сервер VPN.\nГарантирую высокую скорость и стабильно работы!\nВсего за 350 руб/мес",
#                      reply_markup=ikb)

# @dp.callback_query_handler(text="get_all_users")
# async def get_all_users(cb: types.CallbackQuery):
#     users = await db.get_users()
    
#     if not users:
#         await cb.message.answer("Юзеров нет")
#         return await cb.answer()


# if __name__ == "__main__":
#     executor.start_polling(dispatcher=dp,
#                            skip_updates=True,
#                            on_startup=on_startup)
from time import sleep
import asyncio


async def get_string_from_web():
    await asyncio.sleep(3)
    return "Hello World"

async def my_app():
    print("Process started")
    print("Getting string from web")
    task = [get_string_from_web() for i in range(3)]
    results = await asyncio.gather(*task)
    for result in results:
        print(result)
    print("Process finished")

asyncio.run(my_app())
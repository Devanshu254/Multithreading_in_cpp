# Understanding Multithreading in CPP
> Multithreading: Multithreading is the ability of multiple parts of one program to be executed at the same time.
> 2 ways to do that.
> 1. multi tasking: Two things at the same time.
> 2. Real multi threading: You write and divide your program in such way that individual parts of that program can be executed at the same time eg: two people are working in the project and they have divided the task equally so that both the peoples task would get completed at the same time.
> If our pc has two cores then first core is going to take first thread, second core is going to take second thread and both of them can work at the same time as simple as that.
> We can not preadit which thread will be executed first.
> For how long that faster thread is going to write its data before that second thread jumps in starts writing its data. That is why it is important to divide our program like such that what is its job.

## Imagine a real life problem where we can use multiThreading.
> Imagine we are building a weather forecast application and the data that you need and the data is on api. Also imagine that the API is far from you. Other end of the world. So everytime that you ask your API hey how is the weather, it takes a couple of seconds for that information to come back. This loding problem can be solved with multiThreading, a possible solution is to create a thread that work in the background and the work of that thead is to get data from API and store it into computer memory so it will create a cache and then its job will be also to refresh that data every couple of minutes or every couple of seconds that depends of what kind of data we are working with.
> When user will ask what is the weather? You are not going to send the request to the API but instead you will take that information from the data that is available within our Cache and that is going to happen instantly. There will not be any delay of few seconds.
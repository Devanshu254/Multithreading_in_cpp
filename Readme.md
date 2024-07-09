# Understanding Multithreading in CPP
> Multithreading: Multithreading is the ability of multiple parts of one program to be executed at the same time.
> 2 ways to do that.
> 1. multi tasking: Two things at the same time.
> 2. Real multi threading: You write and divide your program in such way that individual parts of that program can be executed at the same time eg: two people are working in the project and they have divided the task equally so that both the peoples task would get completed at the same time.
> If our pc has two cores then first core is going to take first thread, second core is going to take second thread and both of them can work at the same time as simple as that.
> We can not preadit which thread will be executed first.
> For how long that faster thread is going to write its data before that second thread jumps in starts writing its data. That is why it is important to divide our program like such that what is its job.
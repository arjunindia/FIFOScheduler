# A Program that shows First-in First-out CPU Scheduling.
(Assuming that the processes all start in the ready queue)

This project is made in Code::Blocks IDE.


The code is inside the main.c file. this can be compiled and built in any IDE/Compiler, for example, in gcc:

```
gcc main.c
./a.out
```


The expected outpt will be something like:

```
Enter the number of processes: 3
Enter burst time for process p0: 2
Enter burst time for process p1: 3
Enter burst time for process p2: 4

-----------------------------------------------------------------
| Process       | Burst Time    | Waiting Time  |Turnaround Time|
-----------------------------------------------------------------
| p0            | 2             | 0             | 2             |
| p1            | 3             | 2             | 5             |
| p2            | 4             | 5             | 9             |
-----------------------------------------------------------------

Total time = 9
Average waiting time = 2.333 Seconds
Average turnover time = 5.333 Seconds
```

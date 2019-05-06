# SD6_strategy_patern

Implemented the following assignment:

Make an object oriented class design for the Disk Scheduling of an (simplified) Operating System. 

An Operating System can have several different algorithms for handling the requests for a hard disk (like First Come First Serve, Shortest Seek Time First, etc.). See also http://faculty.salina.k-state.edu/tim/ossg/File_sys/disk_scheduling.html (Links to an external site.)Links to an external site. (and many other places).

In a real system, there are processes (like Word and Firefox) who request the Operating System to read information from the hard disk. In our application, the read requests are given via the GUI (for example: a list of numbers which represent the sectors on the disk). 

Make a GUI where the read requests can be entered, and where the strategies can be selected.

A nice example is http://faculty.mc3.edu/pvetere/Applets/APPLETS/DISKSCHED/applet_frame.htm (Links to an external site.)Links to an external site.., (but you have to change your Java security settings for this site, because it has been made with an older Java version). 

Preferably, the class which represents the Operating System runs in a separate thread (or runs in a timer ticker to have easy access to the GUI).

Please supply some example lists for requests which can be executed easily (i.e. don't let the lecturer type in all read requests). Mare sure that starvation might happen for Shortest Seek Time First.

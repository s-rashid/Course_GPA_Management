OPT = -Wall -std=c++11


OBJS =	main.o Student.o Course.o Storage.o View.o Control.o List.o Monitor.o GPAMonitor.o FWMonitor.o CourseList.o
a4: $(OBJS) StuServer.o
	g++ $(OPT) -o a4 $(OBJS) StuServer.o

main.o:	main.cc Control.h
	g++ $(OPT) -c main.cc

View.o: View.cc View.h Storage.h defs.h
	g++ $(OPT) -c View.cc

Control.o: Control.cc Control.h View.h Monitor.h GPAMonitor.h
	g++ $(OPT) -c Control.cc
Storage.o: Storage.cc Storage.h Student.h defs.h
	g++ $(OPT) -c Storage.cc

List.o: List.cc List.h Course.h
	g++ $(OPT) -c List.cc

Student.o:	Student.cc Student.h List.h defs.h
	g++ $(OPT) -c Student.cc

Course.o:	Course.cc Course.h
	g++ $(OPT) -c Course.cc

Monitor.o: Monitor.cc Monitor.h Student.h
	g++ $(OPT) -c Monitor.cc

GPAMonitor.o: GPAMonitor.cc GPAMonitor.h Monitor.h
	g++ $(OPT) -c GPAMonitor.cc
FWMonitor.o: FWMonitor.cc FWMonitor.h Monitor.h
	g++ $(OPT) -c FWMonitor.cc

CourseList.o: CourseList.cc CourseList.h List.h
	g++ $(OPT) -c CourseList.cc

clean:
	rm -f $(OBJS) a4

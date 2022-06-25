#include<string>
#include<iostream>
#include<fstream>
#include<ctime>
#include"Course.h"
#include"Department.h"
#include"Registration.h"
using namespace std;

//display welcome page to this school of cs registration system
void Department::displayWelcome(){
	
// Get current date/time, format is DAY MONTH DD hh:mm:ss YEAR
   time_t t; // t passed as argument in function time()
   struct tm * tt; // decalring variable for localtime()
   time (&t); //passing argument to time()
   tt = localtime(&t);
	
	cout << "\n\n\n\n\n\nToday's Date & Current Time: " << asctime(tt);
	cout << "\t---------------------------------------------------------------------------------------------------------"<< endl;
	cout << "\t|\t\t\t\t\t\t\t\t\t\t\t\t\t|" << endl;
	cout << "\t|\t\t\t\tWelcome to University Science Malaysia\t\t\t\t\t|" << endl;
	cout << "\t|\t\t\t\tSchool of Computer Science\t\t\t\t\t\t|" << endl;
	cout << "\t|\t\t\t\t\t\t\t\t\t\t\t\t\t|" << endl;
	cout << "\t---------------------------------------------------------------------------------------------------------"<< endl;
	cout << "\n\t\t\t\t======= This is Student Courses Registration System =======" << endl;
	cout << "\n\t\t\t\t\tPlease press on any key to continue to:" << endl;
	cout << "\t\t\t\t\t--> Log in into the system.\n\t\t\t\t\t--> View the full courses list.\n";
	cout <<"\n\n";
	
	system("pause");
	system("cls");	
	
}

//initialize core courses into Course class array
void Department::initializeCourses(){
	//year 1 sem 1
	(coreCourses[0]).setCourseId("CPT111");
	(coreCourses[0]).setCourseName("Principles of Programming");
	(coreCourses[0]).setCourseType('T');
	(coreCourses[0]).setCourseUnit(3);
	//year 1 sem 2
	(coreCourses[1]).setCourseId("CPT113");
	(coreCourses[1]).setCourseName("Programming Methodology & Data Structures");
	(coreCourses[1]).setCourseType('T');
	(coreCourses[1]).setCourseUnit(3);
	//year 2 sem 1
	(coreCourses[2]).setCourseId("CAT201");
	(coreCourses[2]).setCourseName("Integrated Software Development Workshop");
	(coreCourses[2]).setCourseType('T');
	(coreCourses[2]).setCourseUnit(2);
	//year 2 sem 2
	(coreCourses[3]).setCourseId("CPT212");
	(coreCourses[3]).setCourseName("Design & Analysis of Algorithms");
	(coreCourses[3]).setCourseType('T');
	(coreCourses[3]).setCourseUnit(4);
	//year 3 sem 1
	(coreCourses[4]).setCourseId("CAT304");
	(coreCourses[4]).setCourseName("Group Innovation Project and Study for Sustainability");
	(coreCourses[4]).setCourseType('T');
	(coreCourses[4]).setCourseUnit(3);
	//year 3 sem 2
	(coreCourses[5]).setCourseId("CPT212");
	(coreCourses[5]).setCourseName("Design & Analysis of Algorithms");
	(coreCourses[5]).setCourseType('T');
	(coreCourses[5]).setCourseUnit(4);
	//year 4 sem 1
	(coreCourses[6]).setCourseId("CAT402");
	(coreCourses[6]).setCourseName("Professional and Technopreneurship Development");
	(coreCourses[6]).setCourseType('T');
	(coreCourses[6]).setCourseUnit(2);
}
		
//initialize major courses into Course class array
void Department::initializeMajor(){
	string major;	
		
		(majorCourses[0]).setCourseId("CPC251");
		(majorCourses[0]).setCourseName("Machine Learning & Computational Intelligence");
		(majorCourses[0]).setCourseType('M');
		(majorCourses[0]).setCourseUnit(3);
		
		(majorCourses[1]).setCourseId("CPC316");
		(majorCourses[1]).setCourseName("Programming Language Implementation & Paradigms");
		(majorCourses[1]).setCourseType('M');
		(majorCourses[1]).setCourseUnit(3);

		(majorCourses[2]).setCourseId("CSE242");
		(majorCourses[2]).setCourseName("Software Requirement Analysis & Modelling");
		(majorCourses[2]).setCourseType('M');
		(majorCourses[2]).setCourseUnit(3);
		
		(majorCourses[3]).setCourseId("CSE341");
		(majorCourses[3]).setCourseName("Software Design & Architecture");
		(majorCourses[3]).setCourseType('M');
		(majorCourses[3]).setCourseUnit(3);
	
		(majorCourses[4]).setCourseId("CST236");
		(majorCourses[4]).setCourseName("Digital Systems Design");
		(majorCourses[4]).setCourseType('M');
		(majorCourses[4]).setCourseUnit(3);
		
		(majorCourses[5]).setCourseId("CPC251");
		(majorCourses[5]).setCourseName("Machine Learning & Computational Intelligence");
		(majorCourses[5]).setCourseType('M');
		(majorCourses[5]).setCourseUnit(3);
	
	
}
void Department::initializeOpenCourses(){
	(openCourses[0]).setCourseId("HFF225");
	(openCourses[0]).setCourseName("Philosophy and Current Issues");
	(openCourses[0]).setCourseType('U');
	(openCourses[0]).setCourseUnit(2);
	
	(openCourses[1]).setCourseId("WUS101");
	(openCourses[1]).setCourseName("Core Entrepreneurship");
	(openCourses[1]).setCourseType('U');
	(openCourses[1]).setCourseUnit(2);
}

//print core courses list
void Department::printCoreCourses(int year,int sem){
	int courseIndex;		//to store course index assigned from following switch
	cout << "\n\t\t\t____________________________________________________________________________\n";
   	cout << "\n\t\t\t******************************** Core Course *******************************\n";
   	cout << "\t\t\t____________________________________________________________________________\n\n";
   	
	switch(year){		
		case 1: if(sem==1) 
				courseIndex=0;
				else courseIndex=1;
				cout<<"\t\t\t "<<(coreCourses[courseIndex])<<endl;
				break;
		case 2: if(sem==1) 
				courseIndex=2;
				else courseIndex=3;
				cout<<"\t\t\t "<<(coreCourses[courseIndex])<<endl;
				break;
		case 3: if(sem==1) 
				courseIndex=4;
				else courseIndex=5;
				cout<<"\t\t\t "<<(coreCourses[courseIndex])<<endl;
				break;
		case 4: if(sem==1){
					courseIndex=6;
					cout<<"\t\t\t "<<(coreCourses[courseIndex])<<endl;
				}
				else cout<<"\t\t\t "<<"No core course available in this sem. (Year 4 Sem 2)"<<endl;
				break;
	}	
	cout << "\t\t\t____________________________________________________________________________\n\n";
}

//print major courses list
void Department::printMajorCourses(int studentYear,int studentSem,string major){
	
	if((studentYear<=2) && (studentSem==1)){
		cout<<"You are not available to register major courses at current moment."<<endl;
	}else{		
		if(major=="CPC"){
			cout << "\n\t\t\t___________________________________ Major __________________________________\n";
   			cout << "\n\t\t\t************************** Intelligent Computing ***************************\n";
   			cout << "\t\t\t____________________________________________________________________________\n\n";	
			cout<<"\t\t\t "<<majorCourses[5]<<endl<<endl;
			cout<<"\t\t\t "<<majorCourses[1]<<endl<<endl;
			cout << "\t\t\t____________________________________________________________________________\n\n";
			
		}else if(major=="CSE"){
			cout << "\n\t\t\t___________________________________ Major __________________________________\n";
   			cout << "\n\t\t\t*************************** Software Engineering ***************************\n";
   			cout << "\t\t\t____________________________________________________________________________\n\n";			
			cout<<"\t\t\t "<<majorCourses[2]<<endl<<endl;
			cout<<"\t\t\t "<<majorCourses[3]<<endl<<endl;
			cout << "\t\t\t____________________________________________________________________________\n\n";
			
		}else if(major=="CST"){
			cout << "\n\t\t\t___________________________________ Major __________________________________\n";
   			cout << "\n\t\t\t************************* Computing Infrastructure *************************\n";
   			cout << "\t\t\t____________________________________________________________________________\n\n";			   		
			cout<<"\t\t\t "<<majorCourses[4]<<endl<<endl;
			cout << "\t\t\t____________________________________________________________________________\n\n";
		}
	}
}

//print open courses list
void Department::printOpenCourses(){
		cout << "\n\t\t\t____________________________________________________________________________\n";
   		cout << "\n\t\t\t******************************** Open Course *******************************\n";
   		cout << "\t\t\t____________________________________________________________________________\n\n";	
	for(int i=0;i<2;i++){
		cout<<"\t\t\t "<<(openCourses[i])<<endl<<endl;
	}
		cout << "\t\t\t____________________________________________________________________________\n\n";
}

//to be used as main menu
void Department::displayAllCourses(){
	string cid;
	bool check=false;
	
    cout <<  endl;
    cout << "________________________________________________________________________________________________________________\n";
	cout << "\n************************************************* Courses List *************************************************\n";
    cout << "________________________________________________________________________________________________________________\n";
    cout << "\n\ta. CPT111 Principles of Programming/3\n";
    cout << "\n\tb. CPT113 Programming Methodology & Data Structures/3\n";
    cout << "\n\tc. CAT201 Integrated Software Development Workshop/2\n";
    cout << "\n\td. CPT212 Design & Analysis of Algorithms/4\n";
    cout << "\n\te. CST235 Principles of Computer Networks and Information Security/4\n";
    cout << "\n\tf. CAT304 Group Innovation Project and Study for Sustainability Intensive Care Unit/3\n"; 
    cout << "\n\tg. CAT402 Professional and Technopreneurship Development/2\n";
    cout << "\n\th. CPC251 Machine Learning & Computational Intelligence/3\n";
    cout << "\n\ti. CPC316 Programming Language Implementation & Paradigms/3\n";
    cout << "\n\tj. CSE242 Software Requirement Analysis & Modelling/3\n";
    cout << "\n\tk. CSE341 Software Design & Architecture/3\n";
    cout << "\n\tl. CST236 Digital Systems Design/3\n";
    cout << "\n\tm. HFF225 Philosophy and Current Issues/2\n";
    cout << "\n\tn. WUS101 Core Entrepreneurship/2\n";
    cout << "________________________________________________________________________________________________________________\n\n";
	cout << "****************************************************************************************************************\n";
    cout << "\t\t\t\t\tEnter 'Z' to go to next page\n";
    cout << "****************************************************************************************************************\n";
    
    char cha1;
	cout << "\tEnter the alphabet assigned to the courses to view details.\n\n";
    cout << "\tPlease enter your choice : " ;
    cin >> cha1;
    cout << endl;
 
 	while(cha1 != 'a' && cha1 != 'A' && cha1 != 'b' && cha1 != 'B' && cha1 != 'c' && cha1 != 'C' && cha1 != 'd' && cha1 != 'D' && 
	cha1 != 'e' && cha1 != 'F' && cha1 != 'f' && cha1 != 'G' && cha1 != 'g' && cha1 != 'H' && cha1 != 'h' && cha1 != 'I' && cha1 != 'i' && 
	cha1 != 'J' && cha1 != 'j' && cha1 != 'K' && cha1 != 'k' && cha1 != 'L' && cha1 != 'l' && cha1 != 'M' && cha1 != 'm' && cha1 != 'N'&& 
	cha1 != 'n' && cha1!='z' && cha1 !='Z')
 	{
 		cout << "Invalid input. Please enter again.\n";
		cin >> cha1;
	}
	
	
	if(cha1=='a' || cha1=='A'){
		displayCoursesDetails((coreCourses[0]).getCourseId());
		check=true;
	}
	else if(cha1=='b' || cha1=='B'){
		displayCoursesDetails((coreCourses[1]).getCourseId());
		check=true;
	}
	else if(cha1=='c' || cha1=='C'){
		displayCoursesDetails((coreCourses[2]).getCourseId());
		check=true;
	}
	else if(cha1=='d' || cha1=='D'){
		displayCoursesDetails((coreCourses[3]).getCourseId());
		check=true;
	}
	else if(cha1=='e' || cha1=='E'){
		displayCoursesDetails((coreCourses[4]).getCourseId());
		check=true;
	}
	else if(cha1=='f' || cha1=='F'){
		displayCoursesDetails((coreCourses[5]).getCourseId());
		check=true;
	}
	else if(cha1=='g' || cha1=='G'){
		displayCoursesDetails((coreCourses[6]).getCourseId());
		check=true;
	}
	else if(cha1=='h' || cha1=='H'){
		displayCoursesDetails((majorCourses[0]).getCourseId());
		check=true;
	}
	else if(cha1=='i' || cha1=='I'){
		displayCoursesDetails((majorCourses[1]).getCourseId());
		check=true;
	}
	else if(cha1=='j' || cha1=='J'){
		displayCoursesDetails((majorCourses[2]).getCourseId());
		check=true;
	}
	else if(cha1=='k' || cha1=='K'){
		displayCoursesDetails((majorCourses[3]).getCourseId());
		check=true;
	}
	else if(cha1=='l' || cha1=='L'){
		displayCoursesDetails((majorCourses[4]).getCourseId());
		check=true;
	}
	else if(cha1=='m' || cha1=='M'){
		displayCoursesDetails((openCourses[0]).getCourseId());
		check=true;
	}
	else if(cha1=='n' || cha1=='N'){
		displayCoursesDetails((openCourses[1]).getCourseId());
		check=true;
	}
	
	if(check){
		cout << "Enter any key to back to main menu." << endl;
		system("pause");
		system("cls");
    	displayAllCourses();	
	}
}

void Department::displayCoursesDetails(string cid){

 	if (cid=="CPT111"){	
        cout<<"=> Course chosen   : CPT111 Principles of Programming\n"; 
		cout<<"=> Course type     : T\n";
		cout<<"=> Course unit     : 3\n";
		cout<<"=> Applicable for  : Year 1 Sem 1\n";
        cout<<"=> Description     : The main emphasis of the course is on the basic principles of programming using the" << endl;
        cout<<"                     C++ programming language. This course covers basic concepts of computer system," << endl;
        cout<<"                     introduction to problem solving techniques, basics of programming, control structures," << endl;
        cout<<"                     modular programming, data file processing, reference variable, pointers and onedimensional array.\n" << endl;
        cout<<"                     At the end of the course, the students will be able to :" << endl;
		cout<<"                     Explain the basic concepts of programming, control structure, modular programming," << endl;
		cout<<"                     file, array and computational thinking component in problem solving techniques." << endl;
		cout<<"                     Construct programs using C++ language." << endl;
        cout<<"                     Apply problem solving techniques in program development.\n" << endl;
        
    }      
    else if (cid=="CAT201"){
        cout << "=> Course chosen   : CAT201 Integrated Software Development Workshop\n"; 
		cout << "=> Course type     : T\n";
		cout << "=> Course unit     : 2\n";
		cout << "=> Applicable for  : Year 2 Sem 1\n";
        cout << "=> Description     : This course introduces the practical aspects of collaborative software development and" << endl;
        cout << "                     graphics programming especially in JAVA programming, and web platform-based" << endl;
        cout << "                     development. Basic concepts of human-computer interaction are also provided especially" << endl;
        cout << "                     from the aspects of usability, user-centric design and GUI evaluation. Students are taught" << endl;
        cout << "                     various models of software development, pair-programming and code management" << endl;
		cout << "                     techniques. Students are required to put into practice the taught concepts through a " << endl; 
		cout << "                     GUI-based software development project.\n" << endl; 
        cout << "                     At the end of the course, the students will be able to :" << endl;
		cout << "                     >> Explain software development concept based on Web Platform." << endl;
		cout << "                     >> Construct a software based on JAVA programming language with user-friendly" << endl;
		cout << "                        graphical user interface and graphics program. " << endl;
		cout << "                     >> Practice the latest Human-computer interaction (HCI) principles in designing,  " << endl;
        cout << "                        assessing and implementing interactive computing systems.\n" << endl << endl;
        
    }       
    else if (cid=="CPT212" ){
        cout << "=> Course chosen   : CPT212 Design & Analysis of Algorithms\n"; 
		cout << "=> Course type     : T\n";
		cout << "=> Course unit     : 4\n";
		cout << "=> Applicable for  : Year 2 Sem 2\n";
        cout << "=> Description     : The essence of this course is on advanced data structures and the design and analysis of" << endl;
        cout << "                     algorithms. The course covers a broad range of algorithms and their analysis in OOP" << endl;
        cout << "                     environment that include sorting, searching, and graph algorithms. The course also" << endl;
        cout << "                     introduces algorithms for string processing, memory management, and advanced topics on algorithms.\n" << endl;
        cout << "                     At the end of the course, the students will be able to :" << endl;
		cout << "                     >> Describe the various algorithm designs based on their categories and purpose." << endl;
		cout << "                     >> Apply fundamental techniques of algorithms and algorithm design, and their" << endl;
		cout << "                        associated data structures in problem solving and programming." << endl;
        cout << "                     >> Distinguish between various algorithm designs based on elementary analysis. \n" << endl << endl;
               
    }        
    else if (cid=="CST235" ){
        cout << "=> Course chosen   : CST235 Principles of Computer Networks and Information Security\n"; 
		cout << "=> Course type     : T\n";
		cout << "=> Course unit     : 4\n";
		cout << "=> Applicable for  : Year 3 Sem 1\n";
        cout << "=> Description     : This course exposes to the students the general knowledge, principles and technologies" << endl;
        cout << "                     that are related to the network system and security in computing contexts. For the network" << endl;
        cout << "                     system aspects, students are exposed to the principals of data communications, architecture" << endl;
        cout << "                     and types of network such as LAN, WAN, Internet: network topology, network protocols," << endl;
        cout << "                     network models especially OSI and TCP/IP also standard used in regards to addressing," << endl;
        cout << "                     IPv6. For security aspects, students are exposed to the general knowledge of security" << endl;
        cout << "                     which is concepts and models of CIA (Confidentiality, Integrity, Availability); risk" << endl;
        cout << "                     introduction to problem solving techniques, basics of programming, control structures," << endl;
        cout << "                     concepts, threat, weaknesses and attack also its vector; The principals of authentication" << endl;
        cout << "                     and authorization and access control; trust and trustworthiness concepts, and secure system," << endl;
        cout << "                     development. Besides, students will be exposed with knowledge about threat to human" << endl;
        cout << "                     resources and the roles that should be played by them in security system.\n" << endl;    
        cout << "                     At the end of the course, the students will be able to :" << endl;
		cout << "                     >> Analyze various type of network technologies, and security requirements." << endl;
		cout << "                     >> Demonstrate various aspects and steps that need to be taken to improve security in" << endl;
		cout << "                        different network models and layers." << endl;
        cout << "                     >> Practice secure software development in computing.\n" << endl << endl;
        
    }
    
        else if (cid=="CAT304"){
        cout << "=> Course chosen   : CAT304 Group Innovation Project and Study for Sustainability Intensive Care Unit\n"; 
		cout << "=> Course type     : T\n";
		cout << "=> Course unit     : 3\n";
		cout << "=> Applicable for  : Year 3 Sem 2\n";
        cout << "=> Description     : The main objective of this course is to expose students to the basic skills in conducting" << endl;
        cout << "                     professional software development projects and technical study in a group that is" << endl;
        cout << "                     infused with innovation and sustainable elements. In addition, this course aims to train" << endl;
        cout << "                     students in the research process, literature review, writing a project report and technical" << endl;
        cout << "                     paper, presenting papers and demonstrating software. The course also serves as a" << endl;
        cout << "                     preparation for the industrial training and final year major project.\n" << endl;

        cout << "                     At the end of the course, the students will be able to :" << endl;
        cout << "                     >> Construct software that exhibits innovation and sustainable attributes." << endl;
        cout << "                     >> Demonstrate software effectively and with confidence." << endl;
        cout << "                     >> Work on a project in a team with full responsibility.\n" << endl << endl;
        
    }
        else if (cid=="CAT402" ){
        cout << "=> Course chosen   :CAT402 Professional and Technopreneurship Development\n"; 
		cout << "=> Course type     : T\n";
		cout << "=> Course unit     : 2\n";
		cout << "=> Applicable for  : Year 4 Sem 1\n";
        cout << "=> Description     : This course is divided into three main components namely:" << endl;
        cout << "                     1. Computing / Software engineering professions. Professionalism. Comparison" << endl;
        cout << "                        with other profession. Professional issues. Computer and techno-business" << endl;
        cout << "                        ethics. Social implications. Intellectual property. Responsibilities dan risks." << endl;
		cout << "                        Security and privacy. Freedom of speech and censorship. Computer crimes and cyberlaws.\n" << endl;        
        cout << "                     2. Professional career development: Career opportunities and development. Job" << endl;
        cout << "                        seeking skills. Job applications and curriculum vitae preparation. Job interview." << endl;
        cout << "                        Job opportunities. Graduate studies in USM.\n" << endl;  
        cout << "                     3. Technopreneurship Development: Understanding business. Defining business" << endl;
        cout << "                        ideas. Creating business plan. Business start-up. Handling Business. Affiliate" << endl;
        cout << "                        Marketing. Creativity and Innovation.\n" << endl;        
        cout << "                     At the end of the course, the students will be able to :" << endl;
		cout << "                     >> Plan self-advancement based on interests, motivation, academic qualifications and" << endl;
		cout << "                        work experience in the context of career decision making." << endl;
		cout << "                     >> Present the business plan effectively and with full confidence." << endl;
        cout << "                     >> Work in a group to produce a good business plan\n" << endl << endl;      
     
    }
        else if (cid=="CPC251" ){
        cout << "=> Course chosen   : CPC251 Machine Learning & Computational Intelligence\n"; 
		cout << "=> Course type     : T\n";
		cout << "=> Course unit     : 3\n";
		cout << "=> Applicable for  : Major in INTELLIGENT COMPUTING\n";
        cout << "=> Description     : The first part of the course introduces methods of learning from data and explains the" << endl;
        cout << "                     concepts behind various machine learning techniques. The course covers the basics of both" << endl;
        cout << "                     supervised and unsupervised learning paradigms. Students will learn to identify the" << endl;
        cout << "                     characteristics of datasets, select features and machine learning algorithms, evaluate the" << endl;
        cout << "                     performance of the machine learning models, and work on how to get the best performance.\n" << endl;
        cout << "                     At the end of the course, the students will be able to :" << endl;
		cout << "                     >> Analyze machine learning and computational intelligence techniques for a particular problem." << endl;
		cout << "                     >> Construct machine learning models by integrating machine learning libraries and tools." << endl;
		cout << "                     >> Study the characteristics of datasets and knowledge sources for machine learning and" << endl;
        cout << "                        computational intelligence problems.\n" << endl << endl;
        
    }
        else if (cid=="CPC316"){
        cout << "=> Course chosen   : CPC316 Programming Language Implementation & Paradigms\n"; 
		cout << "=> Course type     : M\n";
		cout << "=> Course unit     : 3\n";
		cout << "=> Applicable for  : Major in INTELLIGENT COMPUTING & COMPUTING INFRASTRUCTURE\n";
        cout << "=> Description     : The essence of this course is to expose students to the existence of various programming" << endl;
        cout << "                     language paradigms and implementation. Knowledge of programming language paradigm" << endl;
        cout << "                     and implementation is very important for students in choosing the appropriate" << endl;
        cout << "                     programming language to effectively solve programming problems. Students will be" << endl;
        cout << "                     exposed to basic concepts of implementation such as components involved in the" << endl;
        cout << "                     compilation and interpretation of programming languages. This course also covers the" << endl;
        cout << "                     basic concepts of programming language paradigm such as basic data types and program" << endl;
        cout << "                     control structures. The paradigms of the programming language involved are parallel," << endl;
        cout << "                     imperative (object), function and logic.\n" << endl;
        cout << "                     At the end of the course, the students will be able to :" << endl;
		cout << "                     >> Classify various programming language design and implementation methods." << endl;
		cout << "                     >> Construct problem solution in two or more programming paradigms." << endl;
		cout << "                     >> Differentiate various programming language designs and implementations in order to" << endl;
        cout << "                        select the best programming language in problem-solving process.\n" << endl << endl;
    
    }
        else if (cid=="CSE242" ){
        cout << "=> Course chosen   : CSE242 Software Requirement Analysis & Modelling\n"; 
		cout << "=> Course type     : M\n";
		cout << "=> Course unit     : 3\n";
		cout << "=> Applicable for  : Major in SOFTWARE ENGINEERING\n";
        cout << "=> Description     : This course provides an intensive focus on conceptual and practical aspect in carrying a" << endl;
        cout << "                     good software requirement activity in software product development. Software" << endl;
        cout << "                     key topics are covered specifically on two main tasks namely elicitation stage and" << endl;
        cout << "                     modelling stage. The elicitation stage emphasises on the techniques and methods during" << endl;
        cout << "                     such as focus group, stakeholder analysis, feasibility studies are the main key topics as it" << endl;
        cout << "                     refines the problem faced by the customers. Next key topic is the software modelling stage" << endl;
        cout << "                     in which emphasize on the techniques and styles of transforming the information obtained" << endl;
        cout << "                     during the elicitation stage into a good software model. UML based modelling technique" << endl;
        cout << "                     is applied in a great extend toward establishing software models. Student will be exposed" << endl;
        cout << "                     to a real-life stories and experiences related to software requirement task\n" << endl;
        cout << "                     At the end of the course, the students will be able to :" << endl;
		cout << "                     Explain the basic concepts of software Requirement Engineering including its four" << endl;
		cout << "                     core activities such as elicitation, documentation, validation and negotiation, and management." << endl;
		cout << "                     Apply suitable methods and techniques for gathering software requirement for system development project." << endl;
		cout << "                     Propose software model sets that can be used to identify software requirements and" << endl;
        cout << "                     increase the clarity for the function of the system.\n" << endl << endl;
             
    }
        else if (cid=="CSE341" ){
        cout << "=> Course chosen   : CSE341 Software Design & Architecture\n"; 
		cout << "=> Course type     : M\n";
		cout << "=> Course unit     : 3\n";
		cout << "=> Applicable for  : Major in SOFTWARE ENGINEERING\n";
        cout << "=> Description     : This course introduces students to the discipline of software architecture and design. I" << endl;
        cout << "                     covers the architectural activities and related decisions on the design and implementation" << endl;
        cout << "                     of a software architecture. Other topics covered are architecture documentation, quality" << endl;
        cout << "                     attributes and architecture evaluation.\n" << endl;
        cout << "                     At the end of the course, the students will be able to :" << endl;
		cout << "                     Define software architecture and design theory, concepts and design decisions that" << endl;
		cout << "                     influence software architects and software architecture." << endl;
		cout << "                     Follow effective approach in making design decisions based on the desired quality" << endl;
		cout << "                     attributes for a system. " << endl;
		cout << "                     Identify architecturally relevant aspects of the business context and methods for " << endl;
        cout << "                     evaluating software architecture.\n" << endl << endl;
        
        
    }
        else if (cid=="CST236" ){
        cout << "=> Course chosen   : CST236 Digital Systems Design\n"; 
		cout << "=> Course type     : M\n";
		cout << "=> Course unit     : 3\n";
		cout << "=> Applicable for  : Major in COMPUTING INFRASTRUCTURE \n";
        cout << "=> Description     : This course aims are to make sure student able to analyse, design and evaluate digital" << endl;
        cout << "                     system circuits, of medium complexity, that are based on microcontroller interfacing with" << endl;
        cout << "                     MWICOM and related electronic devices to construct a functional digital system.\n" << endl;
        cout << "                     At the end of the course, the students will be able to :" << endl;
		cout << "                     Explain the fundamentals needed in designing a digital system." << endl;
		cout << "                     Construct a working digital system." << endl;
        cout << "                    Propose suitable techniques to design a digital system.\n" << endl << endl;
        
    }       
        else if (cid=="HFF225" ){
        cout << "=> Course chosen   : HFF225 Philosophy and Current Issues\n"; 
		cout << "=> Course type     : U\n";
		cout << "=> Course unit     : 2\n";
		cout << "=> Applicable for  : All students\n";
        cout << "=> Description     : This course covers the relation between philosophy and the National" << endl;
        cout << "                     Education Philosophy and Rukun Negara. Philosophy is used as a" << endl;
        cout << "                     tool to refine the culture of thought in life through the art and" << endl;
        cout << "                     methods of thinking as well as through our understanding of the" << endl;
        cout << "                     concept of the human person. Key topics in philosophy, namely" << endl;
		cout << "                     epistemology, metaphysics, and ethics, are discussed in the context" << endl;
		cout << "                     of current issues. Emphasis is given to philosophy as the basis for" << endl;
		cout << "                     inter-cultural dialogue and fostering common values. At the end of" << endl;
		cout << "                     this course, students will be able to see the disciplines of knowledge" << endl;
        cout << "                     as a comprehensive and integrated body of knowledge\n" << endl << endl;
        
    }
        else if (cid=="WUS101"){
        cout << "=> Course chosen   : WUS101 Core Entrepreneurship\n"; 
		cout << "=> Course type     : U\n";
		cout << "=> Course unit     : 2\n";
		cout << "=> Applicable for  : All students\n";
        cout << "=> Description     : This course provides basic exposure to students on entrepreneurship and" << endl;
        cout << "                     business fields, with emphasis on the implementation of the learning" << endl;
        cout << "                     aspects while experiencing the process of executing business projects in" << endl;
        cout << "                     campus. The main learning outcome is the assimilation of culture and" << endl;
        cout << "                     entrepreneurship work ethics in their everyday life. This initiative is made" << endl;
		cout << "                     to open the minds and arouse the spirit of entrepreneurship among target," << endl;
		cout << "                     groups that possess the potential to become successful entrepreneurs." << endl;
		cout << "                     In order to graduate, the minimum passing grade required is Grade C.\n" << endl << endl;                   
      
    }
}

int Department::registerCourse(string courseIds[],int courseUnits[],int &numRegistered,int studentUnit){
	
	string courseId;
	char courseType;
	int courseUnit;
	int currentUnit=studentUnit;
	bool comfirmRegisterB=false;
	bool checkRegister;
	char comfirmRegisterC;
	bool checkCourse1=false,checkCourse2=false,checkCourse3=false,finalCheckCourse=false;
	int i=0;					//counter

	
	while(!comfirmRegisterB){
		
		do{		//continue looping if entered wrongly
			cout<<"Please enter CORRECT the course ID and course type that u want to register for. "<<endl;
			cout<<"Course ID (example:CPT111): ";
			cin>>courseId;
			cout<<"Course Type (T/M/U): ";
			cin>>courseType;
			
			//check if courses info keyed in correctly
			checkCourse1=coreCourseCheck(courseId);
			checkCourse2=majorCourseCheck(courseId);
			checkCourse3=openCourseCheck(courseId);
			
			//checking validity for ALL 3 courses type
			if(courseType=='T'){					
				if(checkCourse1 && checkCourse2 && checkCourse3)
					finalCheckCourse=true;
				else if(checkCourse1 && checkCourse2 && !checkCourse3)
					finalCheckCourse=true;
				else if(checkCourse1 && !checkCourse2 && checkCourse3)
					finalCheckCourse=true;
				else if(checkCourse1 && !checkCourse2 && !checkCourse3)
					finalCheckCourse=true;	
				else
					finalCheckCourse=false;
					
			}else if(courseType=='M'){
				if(checkCourse1 && checkCourse2 && checkCourse3)
					finalCheckCourse=true;
				else if(checkCourse1 && checkCourse2 && !checkCourse3)
					finalCheckCourse=true;
				else if(!checkCourse1 && checkCourse2 && checkCourse3)
					finalCheckCourse=true;
				else if(!checkCourse1 && checkCourse2 && !checkCourse3)
					finalCheckCourse=true;
				else
					finalCheckCourse=false;
					
			}else if(courseType=='U'){
				if(checkCourse1 && checkCourse2 && checkCourse3)
					finalCheckCourse=true;
				else if(checkCourse1 && !checkCourse2 && checkCourse3)
					finalCheckCourse=true;
				else if(!checkCourse1 && checkCourse2 && checkCourse3)
					finalCheckCourse=true;
				else if(!checkCourse1 && !checkCourse2 && checkCourse3)
					finalCheckCourse=true;
				else
					finalCheckCourse=false;
			}
			
		}while(!finalCheckCourse);
		
		cout<<"\nAre u confirmed to register this course? ('y'/'Y' for yes)"<<endl<<endl;
	
		cin>>comfirmRegisterC;
		
		if(comfirmRegisterC=='Y' || comfirmRegisterC=='y'){					//if confirmed registration
			comfirmRegisterB=true;			
			courseUnit=getCoursesUnit(courseId,courseType);					//get course's unit that we didn't ask user to key in
			currentUnit+=courseUnit;										//get the current units after registration
			checkRegister=robj.courseRegistration(currentUnit);
			
			if(i<6 && checkRegister){		 
				cout<<"You have successfully registered for: "<<courseId<<" with "<<courseUnit<<" units."<<endl;
				numRegistered++;
				courseIds[i]=courseId;			//store registered course into array 
				courseUnits[i]=courseUnit;
			}
			else{
				cout<<"Registration failed. You can't register with this course."<<endl;
			}
		}
	}
	displayCoursesDetails(courseId);
	i++;	//increment counter	
	
	return currentUnit;
}

int Department::getCoursesUnit(string courseId,char courseType){
	
	if(courseType=='T'){
		for(int i=0;i<6;i++){
			if(courseId==(coreCourses[i].getCourseId()))
				return (coreCourses[i].getCourseUnit());
		}
	}else if(courseType=='M'){
		for(int i=0;i<6;i++){
			if(courseId==(majorCourses[i].getCourseId()))
				return (majorCourses[i].getCourseUnit());
		}
	}else if(courseType=='U'){
		for(int i=0;i<2;i++){
			if(courseId==(openCourses[i].getCourseId()))
				return (openCourses[i].getCourseUnit());
		}
	}
}

bool Department::coreCourseCheck(string courseId){
	bool check=false;	
	
	for(int i=0;i<6;i++){		//max 6 courses
		if((((coreCourses[i]).getCourseId())==courseId))
			check=true;
	}
	return check;
}

bool Department::majorCourseCheck(string courseId){
	bool check=false;	
	
	for(int i=0;i<6;i++){		//max 5 courses
		if((((majorCourses[i]).getCourseId())==courseId))
			check=true;
	}
	return check;
}

bool Department::openCourseCheck(string courseId){
	bool check=false;	
	
	for(int i=0;i<2;i++){		//max 2 courses
		if((((openCourses[i]).getCourseId())==courseId))
			check=true;
	}
	return check;
}

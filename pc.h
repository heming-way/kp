#ifndef _PC_H_
#define _PC_H_

typedef struct pc {
	char surname[15]; //фамилия владельца
	int p; //число процессоров
	char ptype[3]; //тип процессоров (х86, х64)
	int s; //объём памяти
	char vtype[3]; //тип видеоконтроллера (in, out, APG, PCI)
	int vs; //объём видеопамяти
	char dtype[4]; //тип винчестеров (SCSI/IDE, ATA/SATA)
	int d; //число винчестеров
	int ds; //ёмкость винчестеров
	int i; //количество интегрированных контроллеров
	int o; //количество внешних устройств
	char os[7]; //операционная система (windows, linux, macos)
}pc;

#endif

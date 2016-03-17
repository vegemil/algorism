// Command Pattern.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
//

#include "stdafx.h"
#include "RemoteControl.h"
#include "Light.h"
#include "CeilingFan.h"
#include "GarageDoor.h"
#include "Stereo.h"
#include "LightOnCommnad.h"
#include "LightOffCommand.h"
#include "CeilingFanHighCommand.h"
#include "CeilingFanOffCommand.h"
#include "GarageDoorOpenCommand.h"
#include "GarageDoorCloseCommand.h"
#include "StereoOnCommand.h"
#include "StereoOffCommand.h"
#include "NoCommand.h"


int _tmain(int argc, _TCHAR* argv[])
{
	RemoteControl* remoteControl = new RemoteControl;

	Light* livingRoomLight = new Light("거실");
	Light* kitchenLight = new Light("부엌");
	CeilingFan* ceilingFan = new CeilingFan("거실");
	GarageDoor* garageDoor = new GarageDoor("");
	Stereo* stereo = new Stereo("거실");

	LightOnCommnad* livingRoomLightOn = new LightOnCommnad(livingRoomLight);
	LightOffCommand* livingRoomLightOff = new LightOffCommand(livingRoomLight);
	LightOnCommnad* kitchenLightOn = new LightOnCommnad(kitchenLight);
	LightOffCommand* kitchenLightOff = new LightOffCommand(kitchenLight);

	CeilingFanHighCommand* ceilingFanHigh = new CeilingFanHighCommand(ceilingFan);
	CeilingFanOffCommand* ceilingFanOff = new CeilingFanOffCommand(ceilingFan);
	GarageDoorOpenCommand* garageDoorOpen = new GarageDoorOpenCommand(garageDoor);
	GarageDoorCloseCommand* garageDoorClose = new GarageDoorCloseCommand(garageDoor);

	StereoOnCommand* stereoOn = new StereoOnCommand(stereo);
	StereoOffCommand* stereoOff = new StereoOffCommand(stereo);

	remoteControl->setCommand(0, livingRoomLightOn, livingRoomLightOff);
	remoteControl->setCommand(1, kitchenLightOn, kitchenLightOff);
	remoteControl->setCommand(2, ceilingFanHigh, ceilingFanOff);
	remoteControl->setCommand(3, stereoOn, stereoOff);

	remoteControl->print();

	for (int i = 0; i < 4; ++i)
	{
		remoteControl->onButtonWasPushed(i);
		remoteControl->offButtonWasPushed(i);
	}

	remoteControl->print();

	remoteControl->onButtonWasPushed(0);
	remoteControl->offButtonWasPushed(0);
	remoteControl->print();
	remoteControl->undoButtonWasPushed();
	remoteControl->offButtonWasPushed(0);
	remoteControl->onButtonWasPushed(0);
	remoteControl->print();
	remoteControl->undoButtonWasPushed();

	return 0;
}


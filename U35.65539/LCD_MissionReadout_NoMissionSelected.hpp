#ifndef UE4SS_SDK_LCD_MissionReadout_NoMissionSelected_HPP
#define UE4SS_SDK_LCD_MissionReadout_NoMissionSelected_HPP

class ULCD_MissionReadout_NoMissionSelected_C : UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UImage* Image_41;
    UImage* Image_113;

    void Construct();
    void ExecuteUbergraph_LCD_MissionReadout_NoMissionSelected(int32 EntryPoint);
}

#endif

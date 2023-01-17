#ifndef UE4SS_SDK_LCD_MissionReadout_NoMissionSelected_HPP
#define UE4SS_SDK_LCD_MissionReadout_NoMissionSelected_HPP

class ULCD_MissionReadout_NoMissionSelected_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UImage* Image_41;

    void Construct();
    void ExecuteUbergraph_LCD_MissionReadout_NoMissionSelected(int32 EntryPoint);
};

#endif

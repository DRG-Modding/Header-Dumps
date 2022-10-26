#ifndef UE4SS_SDK_ITM_SaveSlot_Entry_Header_HPP
#define UE4SS_SDK_ITM_SaveSlot_Entry_Header_HPP

class UITM_SaveSlot_Entry_Header_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBasic_Menu_ColorBar_C* Basic_Menu_ColorBar;
    class UBasic_ButtonScalable_C* Button_Convert;
    class UBasic_ButtonScalable_C* Button_Delete;
    class UBasic_ButtonScalable_C* Button_Load;
    class UImage* IMG_MissionIcon;
    class UTextBlock* Text_RankDescription;
    class UTextBlock* Text_StarDescription;
    class UTextBlock* TXT_SaveName;
    class UTextBlock* TXT_TimeStamp;
    FBlueprintSessionResult Session;

    void Construct();
    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_ITM_SaveSlot_Entry_Header(int32 EntryPoint);
};

#endif

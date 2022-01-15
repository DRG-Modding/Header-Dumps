#ifndef UE4SS_SDK_Announcement_Schematic_HPP
#define UE4SS_SDK_Announcement_Schematic_HPP

class UAnnouncement_Schematic_C : UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UWidgetAnimation* AnnounceAnim;
    UImage* Image_167;
    UCanvasPanel* Root;
    UBasic_Label_C* TitleLabel;
    UUI_Forge_Schematic_C* UI_Forge_Schematic;
    float StartDelay;
    USchematic* Schematic;
    FText Title;
    float TitleProgress;

    void SetTitleProgress(float InProgress, float CallFunc_FClamp_ReturnValue, FString CallFunc_Conv_TextToString_ReturnValue, int32 CallFunc_Len_ReturnValue, float CallFunc_Multiply_IntFloat_ReturnValue, int32 CallFunc_FTrunc_ReturnValue, FString CallFunc_GetSubstring_ReturnValue, FText CallFunc_Conv_StringToText_ReturnValue);
    void PreConstruct(bool IsDesignTime);
    void Construct();
    void OnAnnounceAnimFinished();
    void ExecuteUbergraph_Announcement_Schematic(int32 EntryPoint, bool K2Node_Event_IsDesignTime, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, WidgetAnimationDynamicEvent__DelegateSignature K2Node_CreateDelegate_OutputDelegate);
}

#endif

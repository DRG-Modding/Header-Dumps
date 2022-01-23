#ifndef UE4SS_SDK_Announcement_Schematic_HPP
#define UE4SS_SDK_Announcement_Schematic_HPP

class UAnnouncement_Schematic_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* AnnounceAnim;
    class UImage* Image_167;
    class UCanvasPanel* Root;
    class UBasic_Label_C* TitleLabel;
    class UUI_Forge_Schematic_C* UI_Forge_Schematic;
    float StartDelay;
    class USchematic* Schematic;
    FText Title;
    float TitleProgress;

    void SetTitleProgress(float InProgress, float CallFunc_FClamp_ReturnValue, FString CallFunc_Conv_TextToString_ReturnValue, int32 CallFunc_Len_ReturnValue, float CallFunc_Multiply_IntFloat_ReturnValue, int32 CallFunc_FTrunc_ReturnValue, FString CallFunc_GetSubstring_ReturnValue, FText CallFunc_Conv_StringToText_ReturnValue);
    void PreConstruct(bool IsDesignTime);
    void Construct();
    void OnAnnounceAnimFinished();
    void ExecuteUbergraph_Announcement_Schematic(int32 EntryPoint, bool K2Node_Event_IsDesignTime, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, FExecuteUbergraph_Announcement_SchematicK2Node_CreateDelegate_OutputDelegate K2Node_CreateDelegate_OutputDelegate);
};

#endif

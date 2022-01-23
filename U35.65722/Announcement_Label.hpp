#ifndef UE4SS_SDK_Announcement_Label_HPP
#define UE4SS_SDK_Announcement_Label_HPP

class UAnnouncement_Label_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* AnnounceAnim;
    class UImage* Icon;
    class UTextBlock* Label;
    class UCanvasPanel* Root;
    FText Text;
    FLinearColor TextColor;
    class UTexture2D* IconTexture;
    FLinearColor Icon Tint;
    float StartDelay;

    void PreConstruct(bool IsDesignTime);
    void Construct();
    void OnAnnounceAnimFinished();
    void ExecuteUbergraph_Announcement_Label(int32 EntryPoint, bool Temp_bool_Variable, ESlateVisibility Temp_byte_Variable, ESlateVisibility Temp_byte_Variable_1, bool K2Node_Event_IsDesignTime, FExecuteUbergraph_Announcement_LabelK2Node_CreateDelegate_OutputDelegate K2Node_CreateDelegate_OutputDelegate, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, bool CallFunc_IsValid_ReturnValue, ESlateVisibility K2Node_Select_Default, FLinearColor CallFunc_MenuColors_OutputColor, FSlateColor K2Node_MakeStruct_SlateColor);
};

#endif

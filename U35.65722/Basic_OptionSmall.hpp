#ifndef UE4SS_SDK_Basic_OptionSmall_HPP
#define UE4SS_SDK_Basic_OptionSmall_HPP

class UBasic_OptionSmall_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UImage* Arrow;
    class UTextBlock* ArrowBox_Text;
    class UBorder* BorderLeft_Inner;
    class UBorder* BorderLeft_Outer;
    class UBorder* BorderRight_Inner;
    class UBorder* BorderRight_Outer;
    class UImage* Bracket;
    class UBorder* MainBorder;
    class UNamedSlot* PutStuffHere;
    class USizeBox* SizeBox;
    FText Option Name;
    int32 Slider;
    int32 switcher;
    bool WasHovering;
    FBasic_OptionSmall_COnHoveringBegin OnHoveringBegin;
    void OnHoveringBegin();
    FBasic_OptionSmall_COnHoveringEnd OnHoveringEnd;
    void OnHoveringEnd();

    void SetOptionText(FText InText);
    void PreConstruct(bool IsDesignTime);
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void ExecuteUbergraph_Basic_OptionSmall(int32 EntryPoint, bool K2Node_Event_IsDesignTime, FLinearColor CallFunc_MenuColors_OutputColor, FLinearColor CallFunc_MenuColors_OutputColor_1, FLinearColor CallFunc_MenuColors_OutputColor_2, FSlateColor K2Node_MakeStruct_SlateColor, bool CallFunc_IsHovered_ReturnValue, FGeometry K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, FLinearColor CallFunc_MenuColors_OutputColor_3, FLinearColor CallFunc_MenuColors_OutputColor_4, FSlateColor K2Node_MakeStruct_SlateColor_1, FLinearColor CallFunc_MenuColors_OutputColor_5, bool CallFunc_NotEqual_BoolBool_ReturnValue);
    void OnHoveringEnd__DelegateSignature();
    void OnHoveringBegin__DelegateSignature();
};

#endif

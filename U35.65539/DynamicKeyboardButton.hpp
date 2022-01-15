#ifndef UE4SS_SDK_DynamicKeyboardButton_HPP
#define UE4SS_SDK_DynamicKeyboardButton_HPP

class UDynamicKeyboardButton_C : UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UTextBlock* DATALetter;
    UBorder* LetterBorder;
    USizeBox* SizeBox_0;
    float Icon Width;
    float Icon Height;
    FText Content;

    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_DynamicKeyboardButton(int32 EntryPoint, bool K2Node_Event_IsDesignTime, FLinearColor CallFunc_MenuColors_OutputColor, FLinearColor CallFunc_MenuColors_OutputColor_1, FSlateColor K2Node_MakeStruct_SlateColor);
}

#endif

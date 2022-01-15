#ifndef UE4SS_SDK__DLCclaimPopup_TextLine_HPP
#define UE4SS_SDK__DLCclaimPopup_TextLine_HPP

class U_DLCclaimPopup_TextLine_C : UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UImage* Image_189;
    UTextBlock* TextBlock_367;
    FText Text;

    void SetText(FText NewVar_0);
    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph__DLCclaimPopup_TextLine(int32 EntryPoint, bool K2Node_Event_IsDesignTime);
}

#endif

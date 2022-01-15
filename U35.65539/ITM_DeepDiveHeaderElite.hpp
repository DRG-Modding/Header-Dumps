#ifndef UE4SS_SDK_ITM_DeepDiveHeaderElite_HPP
#define UE4SS_SDK_ITM_DeepDiveHeaderElite_HPP

class UITM_DeepDiveHeaderElite_C : UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UImage* Image_105;
    UImage* Image_107;
    UImage* Image_108;
    UImage* Image_109;
    UShadowBG_C* ShadowBG;
    UTextBlock* TextBlock_113;
    FText EliteContents;

    void SetEliteContents(FText EliteContents, FText CallFunc_TextToUpper_ReturnValue);
    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_ITM_DeepDiveHeaderElite(int32 EntryPoint, bool K2Node_Event_IsDesignTime);
}

#endif

#ifndef UE4SS_SDK_ITM_TerminalInfo_HPP
#define UE4SS_SDK_ITM_TerminalInfo_HPP

class UITM_TerminalInfo_C : UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UBasic_Window_CutCorner_C* Basic_Window_CutCorner;
    UHorizontalBox* HorizontalBox_Outer;
    UImage* Image_Terminal;
    URichTextBlock* RichTextBlock_80;
    USizeBox* SizeBox_Terminal;
    UTextBlock* TextBlock_Headline;
    UTexture2D* Texture;
    FText Headline;
    FText TextBody;
    bool ImageLeftSide;
    UMinersManualData* Data;

    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_ITM_TerminalInfo(int32 EntryPoint, FText CallFunc_GetText_headline, FText CallFunc_GetText_richText, UHorizontalBoxSlot* CallFunc_AddChildToHorizontalBox_ReturnValue, bool K2Node_Event_IsDesignTime, UTexture2D* CallFunc_GetFrontImage_ReturnValue);
}

#endif

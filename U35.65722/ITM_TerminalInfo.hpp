#ifndef UE4SS_SDK_ITM_TerminalInfo_HPP
#define UE4SS_SDK_ITM_TerminalInfo_HPP

class UITM_TerminalInfo_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBasic_Window_CutCorner_C* Basic_Window_CutCorner;
    class UHorizontalBox* HorizontalBox_Outer;
    class UImage* Image_Terminal;
    class URichTextBlock* RichTextBlock_80;
    class USizeBox* SizeBox_Terminal;
    class UTextBlock* TextBlock_Headline;
    class UTexture2D* Texture;
    FText Headline;
    FText TextBody;
    bool ImageLeftSide;
    class UMinersManualData* Data;

    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_ITM_TerminalInfo(int32 EntryPoint, FText CallFunc_GetText_headline, FText CallFunc_GetText_richText, class UHorizontalBoxSlot* CallFunc_AddChildToHorizontalBox_ReturnValue, bool K2Node_Event_IsDesignTime, class UTexture2D* CallFunc_GetFrontImage_ReturnValue);
};

#endif

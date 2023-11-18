#ifndef UE4SS_SDK_UI_Season_Popup_HPP
#define UE4SS_SDK_UI_Season_Popup_HPP

class UUI_Season_Popup_C : public UWindowWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBasic_Image_C* BG_BarLeft;
    class UBasic_Image_C* BG_BarRight;
    class UNamedSlot* Content;
    class UImage* HeaderImage;
    class USizeBox* Popup_SizeBox;
    int32 ContentWidth;
    int32 ContentMinHeight;
    FMargin ContentPadding;
    int32 HeaderImageWidth;
    class UTexture2D* HeaderImageTexture;
    FVector2D HeaderImageOffset;
    TEnumAsByte<EHorizontalAlignment> HeaderImageAlignment;
    float SideBarsOpacity;

    void SetSideBarsOpacity(float InValue);
    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_UI_Season_Popup(int32 EntryPoint);
};

#endif

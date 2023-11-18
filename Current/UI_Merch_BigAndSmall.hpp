#ifndef UE4SS_SDK_UI_Merch_BigAndSmall_HPP
#define UE4SS_SDK_UI_Merch_BigAndSmall_HPP

class UUI_Merch_BigAndSmall_C : public UUI_MerchEntry_Base_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* AnimClick;
    class UWidgetAnimation* AnimHover;
    class UBasic_Label_C* Description_Label;
    class UButton* EntryButton;
    class UBasic_Image_C* Image_Big;
    class UBasic_Image_C* Image_Hovered;
    class UBasic_Image_C* Img_Shadow;
    class UOverlay* Overlay_Big;
    class UHorizontalBox* Small_Box;
    FText Description;
    class UTexture2D* BigImage;
    TArray<class UTexture2D*> SmallImages;
    class UBasic_Image_C* SmallImage;
    float SmallImageWidth;
    int32 Index;
    int32 Big Image Width;
    int32 Small Images Spacing;

    void CreateSmallImages();
    void PreConstruct(bool IsDesignTime);
    void BndEvt__UI_Merch_BigAndSmall_EntryButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__UI_Merch_BigAndSmall_EntryButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__UI_Merch_BigAndSmall_EntryButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature();
    void ExecuteUbergraph_UI_Merch_BigAndSmall(int32 EntryPoint);
};

#endif

#ifndef UE4SS_SDK_LoreScreen_Template_HPP
#define UE4SS_SDK_LoreScreen_Template_HPP

class ULoreScreen_Template_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* MovieIntro;
    class UBasic_Menu_ColorBar_C* Basic_Menu_ColorBar;
    class UImage* HeaderImage;
    class UImage* Image_Background;
    class UImage* Image_Gradient;
    class UImage* Image_MovieBackground;
    class ULore_Content_Text_Header_C* Lore_Content_Text_Header;
    class UImage* MovieCanvas;
    class UOverlay* Overlay_Holder;
    class UOverlay* Overlay_MovieCanvas;
    class UNamedSlot* PutStuffHere;
    class UScrollBox* ScrollBox_Holder;
    class USizeBox* SizeBox_OuterSizer;
    class UMediaPlayer* MediaPlayer;
    class UMediaTexture* MediaTexture;
    FLoreScreen_Template_COnShown OnShown;
    void OnShown();
    bool CanScroll;

    void SetHeadline(FText SetHeadline, class UTexture2D* Icon, FObjectiveMissionIcon MissionIcon);
    void PreConstruct(bool IsDesignTime);
    void SetHeaderMovie(const class UMediaSource* MediaSource);
    void SetHeaderImage(class UTexture2D* HeaderImage, bool Strech, float VerticalFillPercent, bool UseGradient);
    void SetHeaderMaterial(class UMaterialInterface* Material, FVector2D Size);
    void OnOpened(FString OpenedUrl);
    void ExecuteUbergraph_LoreScreen_Template(int32 EntryPoint);
    void OnShown__DelegateSignature();
};

#endif

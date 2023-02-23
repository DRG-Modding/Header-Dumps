#ifndef UE4SS_SDK_Itm_DLC_Entry_HPP
#define UE4SS_SDK_Itm_DLC_Entry_HPP

class UITM_DLC_Entry_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* AnimGlow;
    class UWidgetAnimation* AnimClick;
    class UWidgetAnimation* AnimFadeInMovie;
    class UWidgetAnimation* AnimHover;
    class UCanvasPanel* ButtonCanvas;
    class UWidgetSwitcher* ContentSwitcher;
    class UImage* DLC_Banner;
    class UButton* DLC_Button;
    class UBasic_Image_C* DLC_Movie;
    class USizeBox* DLC_SizeBox;
    class UOverlay* Glow_Overlay;
    class UOverlay* Owned_Overlay;
    class UShadowBG_C* ShadowBG;
    class UGameDLC* dlc;
    float Width;
    class UMediaPlayer* MediaPlayer;
    class UMediaTexture* MediaTexture;
    class UMediaSoundComponent* MediaSound;
    FITM_DLC_Entry_COnHoverBegin OnHoverBegin;
    void OnHoverBegin(class UITM_DLC_Entry_C* InEntry);
    FITM_DLC_Entry_COnHoverEnd OnHoverEnd;
    void OnHoverEnd(class UITM_DLC_Entry_C* InEntry);
    class UMediaSource* Movie;
    bool IsHovering;
    FITM_DLC_Entry_COnClicked OnClicked;
    void OnClicked(class UITM_DLC_Entry_C* InEntry);

    void Hover(bool InHover, bool& OutChanged);
    void GetMediaPlayer(class UMediaPlayer*& MediaPlayer);
    void OnLoaded_842E9D344CABB7D6534CBDB978324582(class UObject* Loaded);
    void BndEvt__DLC_Button_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__DLC_Button_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__DLC_Button_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature();
    void Construct();
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_ITM_DLC_Entry(int32 EntryPoint);
    void OnClicked__DelegateSignature(class UITM_DLC_Entry_C* InEntry);
    void OnHoverEnd__DelegateSignature(class UITM_DLC_Entry_C* InEntry);
    void OnHoverBegin__DelegateSignature(class UITM_DLC_Entry_C* InEntry);
};

#endif

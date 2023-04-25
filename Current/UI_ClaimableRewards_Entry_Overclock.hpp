#ifndef UE4SS_SDK_UI_ClaimableRewards_Entry_Overclock_HPP
#define UE4SS_SDK_UI_ClaimableRewards_Entry_Overclock_HPP

class UUI_ClaimableRewards_Entry_Overclock_C : public UClaimableRewardEntryWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* AnimClaim;
    class UWidgetAnimation* AnimPing;
    class UWidgetAnimation* AnimMoveIn;
    class UBasic_Image_C* Basic_Image;
    class UBorder* BorderHeader;
    class UITM_BigButton_C* BTN_Claim;
    class UITM_CharacterIcon_C* CharacterIcon;
    class UOverlay* Claim_Overlay;
    class UBorder* Content_Border;
    class UCanvasPanel* ContentPanel;
    class UTextBlock* Header_Text;
    class UImage* HeaderEndImage;
    class USizeBox* Icon_Blank;
    class UITM_GeneratedIcon_Item_C* Icon_Cosmetic;
    class UUI_Forge_Schematic_OwnerIcon_C* ICON_Item;
    class UITM_Overclock_Icon_C* Icon_Resource;
    class UWidgetSwitcher* Icon_Switcher;
    class UITM_MatrixCore_C* ITM_MatrixCore;
    class UBasic_Label_C* Text_SubTitle;
    class UBasic_Label_C* Text_Title;
    class USizeBox* Window_Sizer;

    void SequenceEvent__ENTRYPOINTUI_ClaimableRewards_Entry_Overclock_1();
    void SequenceEvent__ENTRYPOINTUI_ClaimableRewards_Entry_Overclock_0();
    void SetDetails(FText WindowTitle, FText inTitle, FText InSubtitle, class UPlayerCharacterID* InUser, class UWidget* InIconContext);
    void SetSchematic(class USchematic* InSchematic, ESchematicType InType);
    void GetSchematic(class USchematic*& OutSchematic, ESchematicType& OutType);
    void Refresh();
    void PlayRevealAudio();
    void OnClaimAnimFinished();
    void BndEvt__ITM_BigButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature();
    void PlaySlamAudio();
    void ReceiveMoveIn(float InStartDelay);
    void Construct();
    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_UI_ClaimableRewards_Entry_Overclock(int32 EntryPoint);
};

#endif

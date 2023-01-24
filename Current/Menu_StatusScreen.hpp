#ifndef UE4SS_SDK_Menu_StatusScreen_HPP
#define UE4SS_SDK_Menu_StatusScreen_HPP

class UMenu_StatusScreen_C : public UWindowWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* LoadoutClicked;
    class UBasic_IconWithOutline_C* Basic_IconWithOutline;
    class UButton* Button_Loadout;
    class UTextBlock* dataReadout;
    class UTextBlock* dataReadout_isModded;
    class UTextBlock* dataReadout_SeedString;
    class UHUD_TabPlayerList_InteractableV2_C* FriendsTab;
    class UImage* Image_BottomSmoke;
    class UImage* Image_GradientBottom;
    class UImage* Image_Separator_2;
    class UITM_EscMenu_BriefingV2_C* ITM_EscMenu_BriefingV2;
    class UITM_PreventDuplicateCharacters_C* ITM_PreventDuplicateCharacters;
    class UITM_PrivatePublic_C* ITM_PrivatePublic;
    class UITM_WeaponAndPerkInfo_C* ITM_WeaponAndPerkInfo1;
    class UHUD_TabPlayerListEntry_InteractableV2_C* LocalPlayer;
    class UImage* PlayerCharacterImage;
    class UTextBlock* TextBlock;
    class UTextBlock* TextBlock_3;
    FMenu_StatusScreen_COpenMinersManual OpenMinersManual;
    void OpenMinersManual(class UObject* IdentifyingObject, bool OpenSpecificPage, EMinersManualSinglePage page);

    void Construct();
    void Update();
    void Close();
    void BndEvt__ITM_EscMenu_BriefingV2_K2Node_ComponentBoundEvent_1_MissionTypeClicked__DelegateSignature();
    void BndEvt__ITM_EscMenu_BriefingV2_K2Node_ComponentBoundEvent_2_MutatorClicked__DelegateSignature();
    void BndEvt__ITM_EscMenu_BriefingV2_K2Node_ComponentBoundEvent_3_WarningClicked__DelegateSignature();
    void PreConstruct(bool IsDesignTime);
    void BndEvt__Button_Loadout_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__ITM_EscMenu_BriefingV2_K2Node_ComponentBoundEvent_7_BiomeClicked__DelegateSignature();
    void RefreshShowroom();
    void ExecuteUbergraph_Menu_StatusScreen(int32 EntryPoint);
    void OpenMinersManual__DelegateSignature(class UObject* IdentifyingObject, bool OpenSpecificPage, EMinersManualSinglePage page);
};

#endif

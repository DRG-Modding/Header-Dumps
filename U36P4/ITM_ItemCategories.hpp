#ifndef UE4SS_SDK_ITM_ItemCategories_HPP
#define UE4SS_SDK_ITM_ItemCategories_HPP

class UITM_ItemCategories_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBasic_Menu_ColorBar_C* Basic_Menu_ColorBar_C_4;
    class UBlurBackground_C* BlurBackground_C_1;
    class UBTN_ItemCategory_C* BTN_Armor;
    class UBTN_ItemCategory_C* BTN_Beard;
    class UBTN_ItemCategory_C* BTN_Eyebrows;
    class UBTN_ItemCategory_C* BTN_HairColor;
    class UBTN_ItemCategory_C* BTN_Headwear;
    class UBTN_ItemCategory_C* BTN_Moustache;
    class UBTN_ItemCategory_C* BTN_Sideburns;
    class UBTN_ItemCategory_C* BTN_SkinColor;
    class UTextBlock* DATA_CategoryName;
    FITM_ItemCategories_CBTN_ArmorClicked BTN_ArmorClicked;
    void BTN_ArmorClicked();
    FITM_ItemCategories_CBTN_BeardClicked BTN_BeardClicked;
    void BTN_BeardClicked();
    FITM_ItemCategories_CBTN_EyebrowsClicked BTN_EyebrowsClicked;
    void BTN_EyebrowsClicked();
    FITM_ItemCategories_CBTN_SkinColorClicked BTN_SkinColorClicked;
    void BTN_SkinColorClicked();
    FITM_ItemCategories_CBTN_HeadwearClicked BTN_HeadwearClicked;
    void BTN_HeadwearClicked();
    FITM_ItemCategories_CBTN_SideburnsClicked BTN_SideburnsClicked;
    void BTN_SideburnsClicked();
    FITM_ItemCategories_CBTN_MoustacheClicked BTN_MoustacheClicked;
    void BTN_MoustacheClicked();
    FITM_ItemCategories_CBTN_HairColorClicked BTN_HairColorClicked;
    void BTN_HairColorClicked();

    void GetButton(EVanitySlot Slot, class UBTN_ItemCategory_C*& Button);
    void BndEvt__BTN_Armor_K2Node_ComponentBoundEvent_2_ButtonClicked__DelegateSignature();
    void BndEvt__BTN_Beard_K2Node_ComponentBoundEvent_4_ButtonClicked__DelegateSignature();
    void BndEvt__BTN_Eyebrows_K2Node_ComponentBoundEvent_5_ButtonClicked__DelegateSignature();
    void BndEvt__BTN_HairColor_K2Node_ComponentBoundEvent_6_ButtonClicked__DelegateSignature();
    void BndEvt__BTN_Headwear_K2Node_ComponentBoundEvent_7_ButtonClicked__DelegateSignature();
    void BndEvt__BTN_Moustache_K2Node_ComponentBoundEvent_8_ButtonClicked__DelegateSignature();
    void BndEvt__BTN_Sideburns_K2Node_ComponentBoundEvent_9_ButtonClicked__DelegateSignature();
    void SetData(class UPlayerCharacterID* characterID);
    void BndEvt__BTN_HairColor_K2Node_ComponentBoundEvent_0_ButtonClicked__DelegateSignature();
    void OnClosed();
    void ExecuteUbergraph_ITM_ItemCategories(int32 EntryPoint);
    void BTN_HairColorClicked__DelegateSignature();
    void BTN_MoustacheClicked__DelegateSignature();
    void BTN_SideburnsClicked__DelegateSignature();
    void BTN_HeadwearClicked__DelegateSignature();
    void BTN_SkinColorClicked__DelegateSignature();
    void BTN_EyebrowsClicked__DelegateSignature();
    void BTN_BeardClicked__DelegateSignature();
    void BTN_ArmorClicked__DelegateSignature();
};

#endif

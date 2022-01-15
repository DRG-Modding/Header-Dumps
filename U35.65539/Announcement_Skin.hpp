#ifndef UE4SS_SDK_Announcement_Skin_HPP
#define UE4SS_SDK_Announcement_Skin_HPP

class UAnnouncement_Skin_C : UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UWidgetAnimation* AnnounceAnim;
    UBasic_Menu_ColorBar_C* Basic_Menu_ColorBar;
    UBasic_Menu_ColorBar_C* Basic_Menu_ColorBar_83;
    UBasic_Menu_ColorBar_C* Basic_Menu_ColorBar_C_85;
    UBasic_Menu_ColorBar_C* Basic_Menu_ColorBar_C_86;
    UBasic_Menu_ColorBar_C* Basic_Menu_ColorBar_C_87;
    UBorder* Border_1;
    UITM_CharacterIcon_C* ITM_CharacterIcon;
    UITM_SkinIcon_C* ITM_SkinIcon;
    UBasic_Label_C* NameLabel;
    UCanvasPanel* Root;
    UUI_Forge_Schematic_OwnerIcon_C* UI_SchematicOwnerIcon;
    float StartDelay;
    UItemSkin* Skin;
    UItemID* SkinOwner;

    void PreConstruct(bool IsDesignTime);
    void Construct();
    void OnAnnounceAnimFinished();
    void ExecuteUbergraph_Announcement_Skin(int32 EntryPoint, UObject* CallFunc_LoadAsset_Blocking_ReturnValue, UItemSkin* K2Node_DynamicCast_AsItem_Skin, bool K2Node_DynamicCast_bSuccess, WidgetAnimationDynamicEvent__DelegateSignature K2Node_CreateDelegate_OutputDelegate, bool K2Node_Event_IsDesignTime, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, FLinearColor CallFunc_MenuColors_OutputColor, FLinearColor CallFunc_MenuColors_OutputColor_1, UObject* CallFunc_LoadAsset_Blocking_ReturnValue_1, UItemID* K2Node_DynamicCast_AsItem_ID, bool K2Node_DynamicCast_bSuccess_1);
}

#endif

#ifndef UE4SS_SDK_Announcement_Skin_HPP
#define UE4SS_SDK_Announcement_Skin_HPP

class UAnnouncement_Skin_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* AnnounceAnim;
    class UBasic_Menu_ColorBar_C* Basic_Menu_ColorBar;
    class UBasic_Menu_ColorBar_C* Basic_Menu_ColorBar_83;
    class UBasic_Menu_ColorBar_C* Basic_Menu_ColorBar_C_85;
    class UBasic_Menu_ColorBar_C* Basic_Menu_ColorBar_C_86;
    class UBasic_Menu_ColorBar_C* Basic_Menu_ColorBar_C_87;
    class UBorder* Border_1;
    class UITM_CharacterIcon_C* ITM_CharacterIcon;
    class UITM_SkinIcon_C* ITM_SkinIcon;
    class UBasic_Label_C* NameLabel;
    class UCanvasPanel* Root;
    class UUI_Forge_Schematic_OwnerIcon_C* UI_SchematicOwnerIcon;
    float StartDelay;
    class UItemSkin* Skin;
    class UItemID* SkinOwner;

    void PreConstruct(bool IsDesignTime);
    void Construct();
    void OnAnnounceAnimFinished();
    void ExecuteUbergraph_Announcement_Skin(int32 EntryPoint, class UObject* CallFunc_LoadAsset_Blocking_ReturnValue, class UItemSkin* K2Node_DynamicCast_AsItem_Skin, bool K2Node_DynamicCast_bSuccess, FExecuteUbergraph_Announcement_SkinK2Node_CreateDelegate_OutputDelegate K2Node_CreateDelegate_OutputDelegate, bool K2Node_Event_IsDesignTime, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, FLinearColor CallFunc_MenuColors_OutputColor, FLinearColor CallFunc_MenuColors_OutputColor_1, class UObject* CallFunc_LoadAsset_Blocking_ReturnValue_1, class UItemID* K2Node_DynamicCast_AsItem_ID, bool K2Node_DynamicCast_bSuccess_1);
};

#endif

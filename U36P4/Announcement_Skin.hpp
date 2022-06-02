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
    void ExecuteUbergraph_Announcement_Skin(int32 EntryPoint);
};

#endif

#ifndef UE4SS_SDK_Announcement_VictoryPose_HPP
#define UE4SS_SDK_Announcement_VictoryPose_HPP

class UAnnouncement_VictoryPose_C : public UUserWidget
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
    class UBasic_Label_C* NameLabel;
    class UCanvasPanel* Root;
    float StartDelay;
    class UVictoryPose* VictoryPose;
    class UPlayerCharacterID* VPOwner;

    void PreConstruct(bool IsDesignTime);
    void Construct();
    void OnAnnounceAnimFinished();
    void ExecuteUbergraph_Announcement_VictoryPose(int32 EntryPoint);
};

#endif

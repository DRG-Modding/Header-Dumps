#ifndef UE4SS_SDK_Announcement_VictoryPose_HPP
#define UE4SS_SDK_Announcement_VictoryPose_HPP

class UAnnouncement_VictoryPose_C : UUserWidget
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
    UBasic_Label_C* NameLabel;
    UCanvasPanel* Root;
    float StartDelay;
    UVictoryPose* VictoryPose;
    UPlayerCharacterID* VPOwner;

    void PreConstruct(bool IsDesignTime);
    void Construct();
    void OnAnnounceAnimFinished();
    void ExecuteUbergraph_Announcement_VictoryPose(int32 EntryPoint, UObject* CallFunc_LoadAsset_Blocking_ReturnValue, UVictoryPose* K2Node_DynamicCast_AsVictory_Pose, bool K2Node_DynamicCast_bSuccess, WidgetAnimationDynamicEvent__DelegateSignature K2Node_CreateDelegate_OutputDelegate, bool K2Node_Event_IsDesignTime, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, FLinearColor CallFunc_MenuColors_OutputColor, UObject* CallFunc_LoadAsset_Blocking_ReturnValue_1, UPlayerCharacterID* K2Node_DynamicCast_AsPlayer_Character_ID, bool K2Node_DynamicCast_bSuccess_1);
}

#endif

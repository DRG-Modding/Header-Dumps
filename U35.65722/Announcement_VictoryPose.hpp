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
    void ExecuteUbergraph_Announcement_VictoryPose(int32 EntryPoint, class UObject* CallFunc_LoadAsset_Blocking_ReturnValue, class UVictoryPose* K2Node_DynamicCast_AsVictory_Pose, bool K2Node_DynamicCast_bSuccess, FExecuteUbergraph_Announcement_VictoryPoseK2Node_CreateDelegate_OutputDelegate K2Node_CreateDelegate_OutputDelegate, bool K2Node_Event_IsDesignTime, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, FLinearColor CallFunc_MenuColors_OutputColor, class UObject* CallFunc_LoadAsset_Blocking_ReturnValue_1, class UPlayerCharacterID* K2Node_DynamicCast_AsPlayer_Character_ID, bool K2Node_DynamicCast_bSuccess_1);
};

#endif

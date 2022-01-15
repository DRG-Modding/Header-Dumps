#ifndef UE4SS_SDK_SLVL_SpaceRig_Xmas_HPP
#define UE4SS_SDK_SLVL_SpaceRig_Xmas_HPP

class ASLVL_SpaceRig_Xmas_C : ALevelScriptActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    TArray<UAudioComponent*> AmbientAudioComponents;

    void UpdateAmbientMusic(UAudioComponent* AudioComponent, USoundCue* AmbienceCue, bool Temp_bool_Variable, bool CallFunc_IsValid_ReturnValue, SoftObjectProperty Temp_softobject_Variable, SoftObjectProperty Temp_softobject_Variable_1, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_NotEqual_ObjectObject_ReturnValue, UAudioComponent* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, UFSDGameUserSettings* CallFunc_GetFSDGameUserSettings_ReturnValue, SoftObjectProperty K2Node_Select_Default, UObject* CallFunc_LoadAsset_Blocking_ReturnValue, USoundCue* K2Node_DynamicCast_AsSound_Cue, bool K2Node_DynamicCast_bSuccess);
    void FindAmbientMusicPlayers(UAudioComponent* AudioComponent, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_AddUnique_ReturnValue, TArray<AAmbientSound*>& CallFunc_GetAllActorsOfClass_OutActors, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, AAmbientSound* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue);
    void ReceiveBeginPlay();
    void OnJukeboxStreamerModeChanged_Event_0(bool NewValue);
    void ExecuteUbergraph_SLVL_SpaceRig_Xmas(int32 EntryPoint, BoolConfigChanged__DelegateSignature K2Node_CreateDelegate_OutputDelegate, UFSDGameUserSettings* CallFunc_GetFSDGameUserSettings_ReturnValue, bool K2Node_CustomEvent_NewValue);
}

#endif

#ifndef UE4SS_SDK_OBJ_DD_AlienEggs_HPP
#define UE4SS_SDK_OBJ_DD_AlienEggs_HPP

class UOBJ_DD_AlienEggs_C : UOBJ_Gather_Base_C
{
    FPointerToUberGraphFrame UberGraphFrame;

    FObjectiveMissionIcon GetMissionIcon(FObjectiveMissionIcon CallFunc_GetPrimaryObjectiveIconFromAsset_ReturnValue);
    void GetNumberOfSpeicalEggs(const TArray<AActor*>& TargetArray, int32& count, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue_1);
    void TurnOnSpecialEggs(TArray<AActor*> FoundEggs, int32 SpecialEggCount, int32 CallFunc_GetNumberOfSpeicalEggs_Count, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 Temp_int_Variable, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, TArray<AActor*>& CallFunc_GetAllActorsWithInterface_OutActors, AActor* CallFunc_Array_Get_Item, InterfaceProperty K2Node_DynamicCast_AsIAlien_Egg, bool K2Node_DynamicCast_bSuccess);
    void Receive_StartTracking();
    void ExecuteUbergraph_OBJ_DD_AlienEggs(int32 EntryPoint, UGameModeBase* CallFunc_GetGameMode_ReturnValue, bool CallFunc_IsValid_ReturnValue);
}

#endif

#ifndef UE4SS_SDK_OBJ_1st_Gather_AlienEggs_HPP
#define UE4SS_SDK_OBJ_1st_Gather_AlienEggs_HPP

class UOBJ_1st_Gather_AlienEggs_C : UOBJ_Gather_Base_C
{
    FPointerToUberGraphFrame UberGraphFrame;

    FObjectiveMissionIcon GetMissionIcon(FObjectiveMissionIcon K2Node_MakeStruct_ObjectiveMissionIcon);
    void GetNumberOfSpeicalEggs(const TArray<AActor*>& TargetArray, int32& count, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue_1);
    void TurnOnSpecialEggs(TArray<AActor*> FoundEggs, int32 SpecialEggCount, int32 CallFunc_GetNumberOfSpeicalEggs_Count, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 Temp_int_Variable, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, TSubclassOf<UObject> CallFunc_LoadClass_ReturnValue, AActor* CallFunc_Array_Get_Item, TSubclassOf<AActor> K2Node_ClassDynamicCast_AsActor, bool K2Node_ClassDynamicCast_bSuccess, InterfaceProperty K2Node_DynamicCast_AsIAlien_Egg, bool K2Node_DynamicCast_bSuccess, TArray<AActor*>& CallFunc_GetAllActorsOfClass_OutActors);
    void Receive_StartTracking();
    void ExecuteUbergraph_OBJ_1st_Gather_AlienEggs(int32 EntryPoint, UGameModeBase* CallFunc_GetGameMode_ReturnValue, bool CallFunc_IsValid_ReturnValue);
}

#endif

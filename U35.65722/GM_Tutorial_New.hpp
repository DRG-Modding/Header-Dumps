#ifndef UE4SS_SDK_GM_Tutorial_New_HPP
#define UE4SS_SDK_GM_Tutorial_New_HPP

class AGM_Tutorial_New_C : public AGM_Mining_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBP_TutorialComponent_C* BP_TutorialComponent;

    UClass* GetDefaultPawnClassForController(class AController* InController);
    void GetEscapepodLocation(FTransform& Location, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Array_Index_Variable_1, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 Temp_int_Array_Index_Variable_2, class AProceduralSetup* CallFunc_GetProceduralSetup_ReturnValue, FRoomNode CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, FGeneratedRoom CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue_1, FRoomItem CallFunc_Array_Get_Item_2, bool CallFunc_Less_IntInt_ReturnValue_1, FTransform CallFunc_MakeTransform_ReturnValue, TSubclassOf<class ABP_TutorialDroppodLocation_C> K2Node_ClassDynamicCast_AsBP_Tutorial_Droppod_Location, bool K2Node_ClassDynamicCast_bSuccess, int32 CallFunc_Array_Length_ReturnValue_2, int32 Temp_int_Loop_Counter_Variable_2, bool CallFunc_Less_IntInt_ReturnValue_2, int32 CallFunc_Add_IntInt_ReturnValue_2);
    void SpawnBosco(FTransform Location);
    void ReceiveBeginPlay();
    void ExecuteUbergraph_GM_Tutorial_New(int32 EntryPoint, class AFSDGameState* CallFunc_GetFSDGameState_ReturnValue, FTransform K2Node_Event_location);
};

#endif

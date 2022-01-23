#ifndef UE4SS_SDK_BP_TetherDispenser_HPP
#define UE4SS_SDK_BP_TetherDispenser_HPP

class ABP_TetherDispenser_C : public ABP_ItemDispenserBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class USphereComponent* Sphere;
    class USkeletalMeshComponent* SkeletalMesh;
    TArray<class ABP_TransmitterNode_C*> Tethers;
    float CustomConnectionRange;

    void ReceiveBeginPlay();
    void OnOpenChanged(bool Open);
    void OnPickedUpItem(class AActor* Item);
    void ExecuteUbergraph_BP_TetherDispenser(int32 EntryPoint, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, class AActor* CallFunc_GetParentActor_ReturnValue, class AFSDGameState* CallFunc_GetFSDGameState_ReturnValue, class UHealthComponentBase* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsAlive_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_IsValid_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, int32 Temp_int_Array_Index_Variable, class ABP_TransmitterNode_C* CallFunc_Array_Get_Item, bool CallFunc_IsConnected_ReturnValue, bool K2Node_Event_open, class AActor* K2Node_Event_item, class ABP_TransmitterNode_C* K2Node_DynamicCast_AsBP_Transmitter_Node, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_Array_Add_ReturnValue, class UTetherComponent* CallFunc_GetComponentByClass_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_1);
};

#endif

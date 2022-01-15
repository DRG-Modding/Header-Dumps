#ifndef UE4SS_SDK_BP_GuntowerEvent_HPP
#define UE4SS_SDK_BP_GuntowerEvent_HPP

class ABP_GuntowerEvent_C : UGuntowerEvent
{
    FPointerToUberGraphFrame UberGraphFrame;
    UChildActorComponent* StarterButton4;
    UChildActorComponent* StarterButton3;
    UChildActorComponent* StarterButton2;
    UChildActorComponent* StarterButton1;
    UStaticMeshComponent* SM_Pillar_Machine_A2B;
    UStaticMeshComponent* SM_Pillar_Machine_A1B;
    UStaticMeshComponent* SM_Pillar_Machine_A0B;
    UStaticMeshComponent* SM_Pillar_Machine_A2;
    UStaticMeshComponent* SM_Pillar_Machine_A1;
    UStaticMeshComponent* SM_Pillar_Machine_A0;
    UParticleSystemComponent* P_GunTower_Base_Smoke;
    UChildActorComponent* ActivationPad3;
    UChildActorComponent* ActivationPad2;
    UChildActorComponent* ActivationPad1;
    UPathfinderCollisionComponent* PathfinderCollision;
    URoomCarverComponent* RoomCarver;
    USimpleObjectInfoComponent* SimpleObjectInfo;
    UOutlineComponent* outline;
    UStaticMeshComponent* StaticMesh;
    ULevelGenerationCarverComponent* LevelGenerationCarver;
    UTerrainPlacementComponent* terrainPlacement;
    UTerrainDetectComponent* TerrainDetect;
    TArray<ABP_GuntowerActivationPlatfrom_C*> ActivationPlatforms;

    void OnEventTriggered();
    void OnEventFinished(bool eventSuccess);
    void OnModuleExploded(UGuntowerModule* explodedModule);
    void OnModulesSpawned();
    void ExecuteUbergraph_BP_GuntowerEvent(int32 EntryPoint, int32 CallFunc_Array_Length_ReturnValue, UBP_GuntowerActivationPlatfrom_C* K2Node_DynamicCast_AsBP_Guntower_Activation_Platfrom, bool K2Node_DynamicCast_bSuccess, UBP_GuntowerActivationPlatfrom_C* K2Node_DynamicCast_AsBP_Guntower_Activation_Platfrom_1, bool K2Node_DynamicCast_bSuccess_1, UBP_GuntowerActivationPlatfrom_C* K2Node_DynamicCast_AsBP_Guntower_Activation_Platfrom_2, bool K2Node_DynamicCast_bSuccess_2, UBP_GuntowerActivationPlatfrom_C* K2Node_DynamicCast_AsBP_Guntower_Activation_Platfrom_3, bool K2Node_DynamicCast_bSuccess_3, bool K2Node_Event_eventSuccess, UBP_GuntowerActivationPlatfrom_C* K2Node_DynamicCast_AsBP_Guntower_Activation_Platfrom_4, bool K2Node_DynamicCast_bSuccess_4, UBP_GuntowerActivationPlatfrom_C* K2Node_DynamicCast_AsBP_Guntower_Activation_Platfrom_5, bool K2Node_DynamicCast_bSuccess_5, int32 Temp_int_Loop_Counter_Variable, int32 Temp_int_Array_Index_Variable, bool CallFunc_Less_IntInt_ReturnValue, UBP_GuntowerActivationPlatfrom_C* CallFunc_Array_Get_Item, int32 CallFunc_Add_IntInt_ReturnValue, UGuntowerModule* K2Node_Event_explodedModule, FVector CallFunc_K2_GetActorLocation_ReturnValue, bool CallFunc_IsValid_ReturnValue, UBP_GuntowerActivationPlatfrom_C* K2Node_DynamicCast_AsBP_Guntower_Activation_Platfrom_6, bool K2Node_DynamicCast_bSuccess_6, UBP_GuntowerActivationPlatfrom_C* K2Node_DynamicCast_AsBP_Guntower_Activation_Platfrom_7, bool K2Node_DynamicCast_bSuccess_7, TArray<UBP_GuntowerActivationPlatfrom_C*>& K2Node_MakeArray_Array, UBP_GuntowerActivationPlatfrom_C* K2Node_DynamicCast_AsBP_Guntower_Activation_Platfrom_8, bool K2Node_DynamicCast_bSuccess_8, UGuntowerModule* CallFunc_Array_Get_Item_1);
}

#endif

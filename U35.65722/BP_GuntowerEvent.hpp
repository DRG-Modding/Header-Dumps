#ifndef UE4SS_SDK_BP_GuntowerEvent_HPP
#define UE4SS_SDK_BP_GuntowerEvent_HPP

class ABP_GuntowerEvent_C : public AGuntowerEvent
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UChildActorComponent* StarterButton4;
    class UChildActorComponent* StarterButton3;
    class UChildActorComponent* StarterButton2;
    class UChildActorComponent* StarterButton1;
    class UStaticMeshComponent* SM_Pillar_Machine_A2B;
    class UStaticMeshComponent* SM_Pillar_Machine_A1B;
    class UStaticMeshComponent* SM_Pillar_Machine_A0B;
    class UStaticMeshComponent* SM_Pillar_Machine_A2;
    class UStaticMeshComponent* SM_Pillar_Machine_A1;
    class UStaticMeshComponent* SM_Pillar_Machine_A0;
    class UParticleSystemComponent* P_GunTower_Base_Smoke;
    class UChildActorComponent* ActivationPad3;
    class UChildActorComponent* ActivationPad2;
    class UChildActorComponent* ActivationPad1;
    class UPathfinderCollisionComponent* PathfinderCollision;
    class URoomCarverComponent* RoomCarver;
    class USimpleObjectInfoComponent* SimpleObjectInfo;
    class UOutlineComponent* outline;
    class UStaticMeshComponent* StaticMesh;
    class ULevelGenerationCarverComponent* LevelGenerationCarver;
    class UTerrainPlacementComponent* terrainPlacement;
    class UTerrainDetectComponent* TerrainDetect;
    TArray<class ABP_GuntowerActivationPlatfrom_C*> ActivationPlatforms;

    void OnEventTriggered();
    void OnEventFinished(bool eventSuccess);
    void OnModuleExploded(class AGuntowerModule* explodedModule);
    void OnModulesSpawned();
    void ExecuteUbergraph_BP_GuntowerEvent(int32 EntryPoint, int32 CallFunc_Array_Length_ReturnValue, class ABP_GuntowerActivationPlatfrom_C* K2Node_DynamicCast_AsBP_Guntower_Activation_Platfrom, bool K2Node_DynamicCast_bSuccess, class ABP_GuntowerActivationPlatfrom_C* K2Node_DynamicCast_AsBP_Guntower_Activation_Platfrom_1, bool K2Node_DynamicCast_bSuccess_1, class ABP_GuntowerActivationPlatfrom_C* K2Node_DynamicCast_AsBP_Guntower_Activation_Platfrom_2, bool K2Node_DynamicCast_bSuccess_2, class ABP_GuntowerActivationPlatfrom_C* K2Node_DynamicCast_AsBP_Guntower_Activation_Platfrom_3, bool K2Node_DynamicCast_bSuccess_3, bool K2Node_Event_eventSuccess, class ABP_GuntowerActivationPlatfrom_C* K2Node_DynamicCast_AsBP_Guntower_Activation_Platfrom_4, bool K2Node_DynamicCast_bSuccess_4, class ABP_GuntowerActivationPlatfrom_C* K2Node_DynamicCast_AsBP_Guntower_Activation_Platfrom_5, bool K2Node_DynamicCast_bSuccess_5, int32 Temp_int_Loop_Counter_Variable, int32 Temp_int_Array_Index_Variable, bool CallFunc_Less_IntInt_ReturnValue, class ABP_GuntowerActivationPlatfrom_C* CallFunc_Array_Get_Item, int32 CallFunc_Add_IntInt_ReturnValue, class AGuntowerModule* K2Node_Event_explodedModule, FVector CallFunc_K2_GetActorLocation_ReturnValue, bool CallFunc_IsValid_ReturnValue, class ABP_GuntowerActivationPlatfrom_C* K2Node_DynamicCast_AsBP_Guntower_Activation_Platfrom_6, bool K2Node_DynamicCast_bSuccess_6, class ABP_GuntowerActivationPlatfrom_C* K2Node_DynamicCast_AsBP_Guntower_Activation_Platfrom_7, bool K2Node_DynamicCast_bSuccess_7, TArray<class ABP_GuntowerActivationPlatfrom_C*>& K2Node_MakeArray_Array, class ABP_GuntowerActivationPlatfrom_C* K2Node_DynamicCast_AsBP_Guntower_Activation_Platfrom_8, bool K2Node_DynamicCast_bSuccess_8, class AGuntowerModule* CallFunc_Array_Get_Item_1);
};

#endif

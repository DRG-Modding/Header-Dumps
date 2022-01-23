#ifndef UE4SS_SDK_BP_Minehead_Sentry_HPP
#define UE4SS_SDK_BP_Minehead_Sentry_HPP

class ABP_Minehead_Sentry_C : public ASentryGun
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UPathfinderCollisionComponent* PathfinderCollision;
    class UCapsuleComponent* Capsule;
    class UParticleSystemComponent* P_SentryGun_MineHead_Casing;
    class USceneComponent* SpotLightBase;
    class UStaticMeshComponent* LightCone;
    class UPointLightComponent* PointLight;
    class USpotLightComponent* SpotLight;
    class UWidgetComponent* AmmoCountWidget;
    class UDamageComponent* Damage1;
    class USimpleObjectInfoComponent* SimpleObjectInfo;
    class UHitscanComponent* HitScan;
    float Undeploy_Progress_02B4B0BE41996CA1C5785D8CDFE1AD49;
    TEnumAsByte<ETimelineDirection::Type> Undeploy__Direction_02B4B0BE41996CA1C5785D8CDFE1AD49;
    class UTimelineComponent* Undeploy;
    float DeployTimeline_DeployProgress_4362678842D8358C48C38287DF4595DA;
    TEnumAsByte<ETimelineDirection::Type> DeployTimeline__Direction_4362678842D8358C48C38287DF4595DA;
    class UTimelineComponent* DeployTimeline;
    float FoldoutAnimDuration;
    float Old Z Angle;
    float Old Z Direction;
    bool IsDeployed;
    float DeployProgress;

    float GetDeployProgress();
    void ConditionallyEnableShadows(class ADeepCSGWorld* CallFunc_GetCSGWorld_ReturnValue, int32 CallFunc_GetShadowQuality_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue);
    void OnRep_IsDeployed();
    void SignOrZero(float Value, float& Sign, bool CallFunc_Less_FloatFloat_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, float CallFunc_SignOfFloat_ReturnValue);
    void DeployTimeline__FinishedFunc();
    void DeployTimeline__UpdateFunc();
    void Undeploy__FinishedFunc();
    void Undeploy__UpdateFunc();
    void AmmoSpent();
    void ReceiveBeginPlay();
    void Sentry Gun Ready();
    void Deploy();
    void UpdateShadows();
    void BndEvt__Hitscan_K2Node_ComponentBoundEvent_0_WeaponFiredDelegate__DelegateSignature(const FVector& Location);
    void ExecuteUbergraph_BP_Minehead_Sentry(int32 EntryPoint, bool CallFunc_IsPlayInEditor_ReturnValue, FExecuteUbergraph_BP_Minehead_SentryK2Node_CreateDelegate_OutputDelegate K2Node_CreateDelegate_OutputDelegate, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_HasAuthority_ReturnValue, class UUserWidget* CallFunc_GetUserWidgetObject_ReturnValue, class AFSDGameState* CallFunc_GetFSDGameState_ReturnValue, class UWeaponDisplay_SentryGun_AmmoCount_C* K2Node_DynamicCast_AsWeapon_Display_Sentry_Gun_Ammo_Count, bool K2Node_DynamicCast_bSuccess, const FVector K2Node_ComponentBoundEvent_location, class UParticleSystemComponent* CallFunc_SpawnEmitterAttached_ReturnValue, bool CallFunc_HasAuthority_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, TArray<class USceneComponent*>& CallFunc_GetChildrenComponents_Children, class USceneComponent* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue);
};

#endif

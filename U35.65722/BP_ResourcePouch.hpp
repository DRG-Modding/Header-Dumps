#ifndef UE4SS_SDK_BP_ResourcePouch_HPP
#define UE4SS_SDK_BP_ResourcePouch_HPP

class ABP_ResourcePouch_C : public AResourcePouch
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UOutlineComponent* outline;
    class USimpleObjectInfoComponent* SimpleObjectInfo;
    class USphereComponent* Useable;
    class UPointLightComponent* PointLight;
    class UFirstPersonStaticMeshComponent* FirstPersonStaticMesh;
    class UBoxComponent* Box;
    class UCarriableComponent* Carriable;
    FVector throwForce;

    void BndEvt__Usable_K2Node_ComponentBoundEvent_0_UsedBySignature__DelegateSignature(class APlayerCharacter* User, EInputKeys Key);
    void BndEvt__Carriable_K2Node_ComponentBoundEvent_1_CarriableEvent__DelegateSignature();
    void Throw(FVector force);
    void BndEvt__Carriable_K2Node_ComponentBoundEvent_0_CarriableEvent__DelegateSignature();
    void OnAttachChanged(bool Attached);
    void ExecuteUbergraph_BP_ResourcePouch(int32 EntryPoint, bool CallFunc_HasAuthority_ReturnValue, bool CallFunc_HasAuthority_ReturnValue_1, class APlayerCharacter* K2Node_ComponentBoundEvent_user, EInputKeys K2Node_ComponentBoundEvent_key, bool CallFunc_PickupItem_ReturnValue, FVector K2Node_Event_force, FVector CallFunc_ComponentToWorldLocation_ReturnValue, FVector CallFunc_ComponentToWorldLocation_ReturnValue_1, class UAudioComponent* CallFunc_SpawnSoundAtLocation_ReturnValue, class UAudioComponent* CallFunc_SpawnSoundAtLocation_ReturnValue_1, bool K2Node_Event_Attached, bool CallFunc_IsValid_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_IsFirstPerson_ReturnValue);
};

#endif

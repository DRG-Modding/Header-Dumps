#ifndef UE4SS_SDK_WPN_OilExtractor_HPP
#define UE4SS_SDK_WPN_OilExtractor_HPP

class AWPN_OilExtractor_C : public AWPN_Extractor_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UAudioComponent* OilExtractorHitPositive;
    class UAudioComponent* OilExtractorHitNegative;
    class UWidgetComponent* Widget_OilReadoutBottom_Ground;
    class UWidgetComponent* Widget_OilReadoutTop_Ground;
    class UWidgetComponent* Widget_OilReadoutBottom_TP;
    class UWidgetComponent* Widget_OilReadoutTop_TP;
    class UFirstPersonWidgetComponent* Widget_OilReadoutBottom;
    class UFirstPersonWidgetComponent* Widget_OilReadoutTop;
    class USimpleObjectInfoComponent* SimpleObjectInfo;
    class UActorTrackingComponent* ActorTracking;
    class USoundCue* ImpactSound;
    class UMaterialInstanceDynamic* FuelbarMat;

    void SetFilledUI(class UWidgetComponent* Widget, float FilledAmount);
    void OnCurrentLoadChanged(float load);
    void ReceiveBeginPlay();
    void RecieveEquipped();
    void RecieveUnequipped();
    void ReceiveTick(float DeltaSeconds);
    void BndEvt__DroppedCollider_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);
    void OnValidSurfaceChanged(bool IsValid);
    void ExecuteUbergraph_WPN_OilExtractor(int32 EntryPoint);
};

#endif

#ifndef UE4SS_SDK_WPN_JetPackItem_HPP
#define UE4SS_SDK_WPN_JetPackItem_HPP

class AWPN_JetPackItem_C : public AJetPackItem
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UParticleSystemComponent* SmokeParticle;
    class UAudioComponent* ThrusterAudio;
    class UWidgetComponent* Display;
    class UParticleSystemComponent* ThrusterParticleRight;
    class UParticleSystemComponent* ThrusterParticleLeft;
    class UCrosshairAggregator* CrosshairAggregator;
    float ThrusterAudioTimeLine_VolumeModifier_8AF52364460D65D4AF1B6CA27FE77FA0;
    TEnumAsByte<ETimelineDirection::Type> ThrusterAudioTimeLine__Direction_8AF52364460D65D4AF1B6CA27FE77FA0;
    class UTimelineComponent* ThrusterAudioTimeLine;

    void ToggleThrusters(bool On);
    void UserConstructionScript();
    void ThrusterAudioTimeLine__FinishedFunc();
    void ThrusterAudioTimeLine__UpdateFunc();
    void OnFuelChanged(float Value, float Delta);
    void OnRep_Active();
    void ReceiveBeginPlay();
    void ExecuteUbergraph_WPN_JetPackItem(int32 EntryPoint);
};

#endif

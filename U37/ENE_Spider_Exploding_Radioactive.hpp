#ifndef UE4SS_SDK_ENE_Spider_Exploding_Radioactive_HPP
#define UE4SS_SDK_ENE_Spider_Exploding_Radioactive_HPP

class AENE_Spider_Exploding_Radioactive_C : public AENE_Spider_Exploding_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    TSubclassOf<class AActor> PostExplosionCloudClass;

    void DamageAndCarve();
    void ExecuteUbergraph_ENE_Spider_Exploding_Radioactive(int32 EntryPoint);
};

#endif

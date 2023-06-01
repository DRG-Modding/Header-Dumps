#ifndef UE4SS_SDK_ABP_Spider_Stinger_HPP
#define UE4SS_SDK_ABP_Spider_Stinger_HPP

class UABP_Spider_Stinger_C : public UABP_Spider_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    float LastPlayed;
    float CoolDown;

    void AnimNotify_StingerScream();
    void ExecuteUbergraph_ABP_Spider_Stinger(int32 EntryPoint);
};

#endif

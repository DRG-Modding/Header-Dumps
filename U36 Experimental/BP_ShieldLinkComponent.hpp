#ifndef UE4SS_SDK_BP_ShieldLinkComponent_HPP
#define UE4SS_SDK_BP_ShieldLinkComponent_HPP

class UBP_ShieldLinkComponent_C : public UShieldLinkComponent
{
    FPointerToUberGraphFrame UberGraphFrame;

    void ExecuteUbergraph_BP_ShieldLinkComponent(int32 EntryPoint);
};

#endif

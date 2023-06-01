#ifndef UE4SS_SDK_PRJ_Spider_Lobber_Projectile_Fragment_HPP
#define UE4SS_SDK_PRJ_Spider_Lobber_Projectile_Fragment_HPP

class APRJ_Spider_Lobber_Projectile_Fragment_C : public APRJ_Base_Spider_Lobber_Projectile_C
{
    FPointerToUberGraphFrame UberGraphFrame;

    void OnInitialized();
    void ExecuteUbergraph_PRJ_Spider_Lobber_Projectile_Fragment(int32 EntryPoint);
};

#endif

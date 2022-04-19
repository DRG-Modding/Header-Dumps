#ifndef UE4SS_SDK_PRJ_GooProjectile_Fragment_Base_HPP
#define UE4SS_SDK_PRJ_GooProjectile_Fragment_Base_HPP

class APRJ_GooProjectile_Fragment_Base_C : public APRJ_BaseNormalGooProjectile_C
{
    FPointerToUberGraphFrame UberGraphFrame;

    void OnInitialized();
    void ExecuteUbergraph_PRJ_GooProjectile_Fragment_Base(int32 EntryPoint);
};

#endif

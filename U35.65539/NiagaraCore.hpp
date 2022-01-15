#ifndef UE4SS_SDK_NiagaraCore_HPP
#define UE4SS_SDK_NiagaraCore_HPP

class UNiagaraMergeable : UObject
{
}

class UNiagaraDataInterfaceBase : UNiagaraMergeable
{
}

struct UNiagaraCompileHash
{
    TArray<uint8> DataHash;
}

#endif

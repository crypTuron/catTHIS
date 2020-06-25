About CATS cryptocurrency
=====
<p>Cats is an experimental digital currency that enables instant payments to anyone, anywhere in the world. Cats uses peer-to-peer technology to operate with no central authority: managing transactions and issuing money are carried out collectively by the network. Cats Core is the name of open source software which enables the use of this currency.</p>

## Table of Contents
- [Specifications](#specifications)
- [PoS Staking Requirements](#pos-staking-requirements)
- [PoS Block Rewards](#pos-block-rewards)

<a name="specifications"></a>
## Specifications

| Specification         | Descriptor                              |
|-----------------------|-----------------------------------------|
| Ticker                | CATS                                    |
| Algorithm             | QUARK                                   |
| RPC Port              | 2238                                    |
| P2P Port              | 22711                                   |
| Masternode Collateral | 10000 CATS                              |
| Block Spacing         | 60 Seconds                              |
| PoW Period            | nHeight ≤ 200                           |
| PoS Period            | nHeight ≥ 5000                          |
| Protocol Support      | IPV4, IPV6, TOR, I2P                    |

<a name="pos-staking-requirements"></a>
## PoS Staking Requirements

| Requirement   | Details              |
|---------------|----------------------|
| Confirmations | 19 Blocks            |
| Wallet        | Unlocked for Staking |

<a name="pos-block-rewards"></a>
## PoS Block Rewards

| Subsidy | Block           | Reward          | Reward Split     |
|---------|-----------------|-----------------|------------------|
| Phase 0 | 0               | 241000000 CATS  | 0% MN / 100% POW |
| Phase 1 | 1-200           | 10 CATS         | 80% MN / 20% POW |
| Phase 2 | 200-2000        | 17 CATS         | 80% MN / 20% POW |
| Phase 3 | 5000∞           | 17 CATS         | 94% MN / 6% POS  |

License
=====

<p>CATS Core is released under the terms of the MIT license. See https://github.com/catTHIS-Project/catthis/cats/blob/master/COPYING for more information or see https://opensource.org/licenses/MIT.</p>

CATS uses components from PIVX Core, which uses components of both Bitcoin and DASH.
